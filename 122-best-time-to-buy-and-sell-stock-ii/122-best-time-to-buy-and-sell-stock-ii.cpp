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
        vector<vector<long>>dp(n, vector<long>(2, -1));
        
        return profit(0, 1, dp, prices, n); 
    }
};