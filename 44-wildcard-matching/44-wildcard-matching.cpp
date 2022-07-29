class Solution {
public:
    bool wildM(string &s1, string &s2, int i, int j, vector<vector<int>>&dp)
    {
        if(i<0 && j<0)    return true;
        if(i<0)           
        {
            for(int p=0; p<=j; p++)
            {
                if(s2[p]!='*')   return false;
            }
            return true;
        }
        if(j<0)           return false;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s1[i] == s2[j] || s2[j]=='?')
        {
            return dp[i][j] = wildM(s1, s2, i-1, j-1, dp);
        }
        if(s2[j]=='*')
        {
            return dp[i][j] = wildM(s1, s2, i-1, j, dp) || wildM(s1, s2, i, j-1, dp);
        }
        return dp[i][j] = false;
 
    }
    bool isMatch(string s, string p)
    {
        int l1 = s.length();
        int l2 = p.length();
        
        vector<vector<int>>dp(l1, vector<int>(l2, -1));
        return wildM(s, p, l1-1, l2-1, dp);
    }
};