class Solution {
public:
     int dp[601][101][101];
    int zerones(vector<vector<int>>& ds, int ind, int m, int n,int len)
    {
        if(ind==len)     return 0;
        
        if(dp[ind][m][n] != -1)      return dp[ind][m][n];
        
        if(m>=ds[ind][1] && n>=ds[ind][0])
        {
            return dp[ind][m][n] = max(1+zerones(ds, ind+1, m-ds[ind][1], n-ds[ind][0],len),
                                zerones(ds, ind+1, m, n,len));
        }
        else
        {
            return dp[ind][m][n] = zerones(ds, ind+1, m, n,len);
        }
    }
    int findMaxForm(vector<string>& strs, int m, int n)
    {
        int len = strs.size();
        vector<vector<int>>ds(len);
        
        for(int i=0; i<len; i++)
        {
            int ones = 0;
            int zeros = 0;
            string s = strs[i];
            for(int j=0; j<s.length(); j++)
            {
                if(s[j]=='1')       ones++;
                else                zeros++;
            }
            ds[i].push_back(ones);
            ds[i].push_back(zeros);
        }
        
       
        memset(dp, -1, sizeof(dp));
        
        return zerones(ds, 0, m, n, len);
    }
};