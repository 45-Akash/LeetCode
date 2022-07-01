class Solution {
public:
    
    int climbCost(vector<int>& cost,int ind, vector<int>&dp)
    {
        if(ind>=cost.size())
        {
            return 0;
        }
        
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
        
        int sum1 = cost[ind] + climbCost(cost, ind+1, dp);
        int sum2 = cost[ind] + climbCost(cost, ind+2, dp);
        
        return dp[ind] = min(sum1, sum2);
    }
    
    int minCostClimbingStairs(vector<int>& cost)
    {
        int n = cost.size();
        vector<int>dp(n+1, -1);
        int ans = min(climbCost(cost, 0, dp), climbCost(cost, 1, dp));
        return ans;
    }
};