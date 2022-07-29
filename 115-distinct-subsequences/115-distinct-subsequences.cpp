class Solution {
public:
    int distSub(string s1, string s2, int i, int j, vector<vector<int>>&dp)
    {
        if(j<0)     return 1;
        if(i<0)     return 0;
        
        if(dp[i][j] != -1)     return dp[i][j];
        
        if(s1[i] == s2[j])
        {
            return dp[i][j] = distSub(s1, s2, i-1, j-1, dp) + distSub(s1, s2, i-1, j, dp);
        }
        else
        {
            return dp[i][j] = distSub(s1, s2, i-1, j, dp);
        }
    }
    int numDistinct(string s, string t)
    {
        int l1 = s.length();
        int l2 = t.length();
        long mod = 1e9+1;
        
        vector<vector<int>>dp(l1+1, vector<int>(l2+1, 0));
        
        for(int i=0; i<=l2; i++)
        {
            dp[0][i] = 0;
        }
        for(int i=0; i<=l1; i++)
        {
            dp[i][0] = 1;
        }
        
        
        for(int i=1; i<=l1; i++)
        {
            for(int j=1; j<=l2; j++)
            {
                if(s[i-1] == t[j-1])
                {
                    dp[i][j] = dp[i-1][j-1]%mod + dp[i-1][j]%mod;
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[l1][l2];
    }
};