class Solution {
public:
    int Edist(string s1, string s2, int i, int j, vector<vector<int>>&dp)
    {
        if(i<0)      return j+1;
        if(j<0)      return i+1;
        
        if(dp[i][j] != -1)   return dp[i][j];
        
        if(s1[i] == s2[j])
        {
            return dp[i][j] = Edist(s1, s2, i-1, j-1, dp);
        }
        else
        {
            
            int del = 1+Edist(s1, s2, i-1, j, dp);
            int insert = 1+Edist(s1, s2, i, j-1, dp);
            int replace = 1+Edist(s1, s2, i-1, j-1, dp);
            
            del = min(del, insert);
            del = min(del, replace);
            return dp[i][j] = del;
        }
    }
    int minDistance(string word1, string word2)
    {
        int l1 = word1.size();
        int l2 = word2.size();
        
        vector<vector<int>>dp(l1+1, vector<int>(l2+1, 0));
        for(int i=0; i<=l1; i++)
        {
            for(int j=0; j<=l2; j++)
            {
                dp[i][0] = i;
                dp[0][j] = j;
            }
        }
        
        for(int i=1; i<=l1; i++)
        {
            for(int j=1; j<=l2; j++)
            {
                if(word1[i-1]==word2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1];
                }
                else
                {
                    int del = 1+dp[i-1][j];
                    int insert = 1+dp[i][j-1];
                    int replace = 1+dp[i-1][j-1];

                    del = min(del, insert);
                    del = min(del, replace);
                    dp[i][j] = del;
                }
            }
        }
        // return Edist(word1, word2, l1-1, l2-1, dp);
        return dp[l1][l2];
    }
};