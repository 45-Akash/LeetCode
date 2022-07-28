class Solution {
public:
    int LPS(string s1, string s2, int ind1, int ind2, vector<vector<int>>&dp)
    {
        if(ind1==0 || ind2==0)     return 0;
        if(dp[ind1][ind2] != -1)   return dp[ind1][ind2];
        
        if(s1[ind1-1] == s2[ind2-1])
        {
            return dp[ind1][ind2] = 1+LPS(s1, s2, ind1-1, ind2-1, dp);
        }
        return dp[ind1][ind2] = max(LPS(s1, s2, ind1-1, ind2, dp), LPS(s1, s2, ind1, ind2-1, dp));
    }
    int minInsertions(string s)
    {
        //find longest palindromic subsequence
        int n = s.length();
        string org = s;
        reverse(s.begin(), s.end());
        vector<vector<int>>dp(n+1, vector<int>(n+1, 0));
        for(int i=0; i<=n; i++)         dp[0][i] = 0;
        for(int i=0; i<=n; i++)         dp[i][0] = 0;
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(org[i-1]==s[j-1])
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        
        int LPS_len = dp[n][n];
        
        // minimun insertion = length of string - longest palindromic subsequence
        return n - LPS_len;
    }
};