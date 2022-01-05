class Solution {
    
    int LCS(String s1, String s2, int l1, int l2, int[][] dp)
    {
        if(l1==0 || l2==0)    return 0;
        
        if(dp[l1][l2] != -1)   return dp[l1][l2];
        if(s1.charAt(l1-1) == s2.charAt(l2-1)) 
        {
            return dp[l1][l2] = 1+LCS(s1,s2,l1-1,l2-1,dp);
        }
        return dp[l1][l2] = Math.max(LCS(s1,s2,l1-1,l2,dp),LCS(s1,s2,l1,l2-1,dp));
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
                dp[i][j] = -1;
            }
        }
        int ans = LCS(text1, text2, len_1, len_2, dp);
        return ans;
    }
}