class Solution {
public:
    int profit(vector<int>&prices, int ind, int buy, int n, vector<vector<int>>&dp)
    {
        if(ind>=n) return 0;
        if(dp[ind][buy] != -1) return dp[ind][buy];
        
        if(buy==1)
        {
            int Buy = -prices[ind] + profit(prices, ind+1, 0, n, dp);
            int notBuy = 0 + profit(prices, ind+1, 1, n, dp);
            return dp[ind][buy] = max(Buy, notBuy); 
        }
        else
        {
            int sell = prices[ind] + profit(prices, ind+2, 1, n, dp);
            int notSell = 0 + profit(prices, ind+1, 0, n, dp);
            return dp[ind][buy] = max(sell, notSell); 
        }
    }
    int maxProfit(vector<int>& prices)
    {
        int n = prices.size();
        vector<vector<int>>dp(n, vector<int>(2, -1));
        return profit(prices, 0, 1, n, dp);
    }
};