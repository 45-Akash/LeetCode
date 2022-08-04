class Solution {
public:
    int profit(int ind, int buy, vector<vector<long>>&dp, vector<int>&p, int n)
    {
        if(ind == n)   return 0;
        if(dp[ind][buy] != -1)    return dp[ind][buy];
        
        if(buy==1)
        {
            int Buy = -p[ind] + profit(ind+1, 0, dp, p, n);
            int notBuy = 0 + profit(ind+1, 1, dp, p, n);
            return dp[ind][buy] = max(Buy, notBuy);
        }
        else
        {
            int Sell = p[ind] + profit(ind+1, 1, dp, p, n);
            int notSell = 0 + profit(ind+1, 0, dp, p, n);
            return dp[ind][buy] = max(Sell, notSell);
        }
    }
    int maxProfit(vector<int>& prices)
    {
        int n = prices.size();
        vector<vector<long>>dp(n+1, vector<long>(2, 0));
        dp[n][0] = dp[n][1] = 0;
        
        for(int ind=n-1; ind>=0; ind--)
        {
            for(int buy=0; buy<=1; buy++)
            {
                if(buy==1)
                {
                    int Buy = -prices[ind] + dp[ind+1][0];
                    int notBuy = 0 + dp[ind+1][1];
                    dp[ind][buy] = max(Buy, notBuy);
                }
                else
                {
                    int Sell = prices[ind] + dp[ind+1][1];
                    int notSell = 0 + dp[ind+1][0];
                    dp[ind][buy] = max(Sell, notSell);
                }
            }
        }
        
        return dp[0][1]; 
    }
};