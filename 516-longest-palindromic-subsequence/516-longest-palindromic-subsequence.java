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
    public int longestPalindromeSubseq(String s)
    {
        String rev = "";
        for(int i=s.length()-1; i>=0; i--)      rev += s.charAt(i);
        
        int n = s.length();
        
        int[][] dp = new int[n+1][n+1];
        
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=n; j++)
            {
                dp[i][j] = -1;
            }
        }
        
        return LCS(s, rev, n, n, dp);
    }
}