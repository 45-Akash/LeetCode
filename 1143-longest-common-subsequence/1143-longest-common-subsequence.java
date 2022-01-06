class Solution {
    
    int LCS(String s1, String s2, int l1, int l2, int[][] dp)
    {
        for(int i=1; i<=l1; i++)
        {
            for(int j=1; j<=l2; j++)
            {
                if(s1.charAt(i-1)==s2.charAt(j-1))
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = Math.max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
    return dp[l1][l2];
    }
    
    public int longestCommonSubsequence(String text1, String text2)
    {
        int len_1 = text1.length();
        int len_2 = text2.length();
        int[][] dp = new int[len_1+1][len_2+1];
        
        for(int i=0; i<=len_1; i++)
        {
            for(int j=0; j<=len_2; j++)
            {
                if(i==0 || j==0)   dp[i][j]=0;
            }
        }
        int ans = LCS(text1, text2, len_1, len_2, dp);
        return ans;
    }
}