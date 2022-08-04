class Solution {
public:
    
    int profit(vector<int>&p, int ind, int buy, int cap, int n, vector<vector<vector<int>>>&dp)
    {
        if(cap==0)   return 0;
        if(ind==n)   return 0;
        
        if(dp[ind][buy][cap] != -1)      return dp[ind][buy][cap];
        if(buy==1)
        {
            int Buy = -p[ind] + profit(p, ind+1, 0, cap, n, dp);
            int notBuy = 0 + profit(p, ind+1, 1, cap, n, dp);
            return dp[ind][buy][cap] = max(Buy, notBuy);
        }
        else
        {
            int sell = p[ind] + profit(p, ind+1, 1, cap-1, n, dp);
            int notSell = 0 + profit(p, ind+1, 0, cap, n, dp);
            return dp[ind][buy][cap] = max(sell, notSell);
        }
    }
    int maxProfit(vector<int>& prices)
    {
        int n = prices.size();
        vector<vector<vector<int>>>dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        return profit(prices, 0, 1, 2, n, dp);
    }
};