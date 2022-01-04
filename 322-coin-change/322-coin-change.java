class Solution {
    
    int Coin(int[] coins, int amount, int n, int[][] dp)
    {
        for(int i=2; i<=n; i++)
        {
            for(int j=1; j<=amount; j++)
            {
                if(coins[i-1] <= j)
                {
                    dp[i][j] = Math.min(dp[i][j-coins[i-1]]+1, dp[i-1][j]);
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if(dp[n][amount] == Integer.MAX_VALUE-1)   return -1;
    return dp[n][amount];
    }
    
    public int coinChange(int[] coins, int amount)
    {
        int n = coins.length;
        int[][] dp = new int[n+1][amount+1];
        
        //initialization of 1st row 1st column
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=amount; j++)
            {
                if(j==0)   dp[i][j] = 0;
                if(i==0)   dp[i][j] = Integer.MAX_VALUE-1;
            }
        }
        
        //initialization of 2nd row
        int i=1;
        for(int j=1; j<=amount; j++)
        {
            if(j%coins[0]==0)   dp[i][j] = j/coins[0];
            else                dp[i][j] = Integer.MAX_VALUE-1;
        }
      return Coin(coins, amount, n, dp); 
    }
}