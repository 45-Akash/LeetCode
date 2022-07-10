class Solution {
public:
    int cost(vector<int>&nums, int ind, int n, vector<int>&dp)
    {
        if(ind>=n)     return INT_MAX-n;
        if(ind==n-1)   return 0;
        
        if(dp[ind]!=INT_MAX-n)     return dp[ind];
        if(nums[ind]==0)           return INT_MAX-n;
        
        for(int i=ind+1; i<=ind+nums[ind]; i++)
            dp[ind] = min(dp[ind], 1+cost(nums, i, n, dp));
        return dp[ind];
    }
    int jump(vector<int>& nums)
    {
        int n = nums.size();
        vector<int>dp(n, INT_MAX-n);
        
        return cost(nums, 0, n, dp);
    }
};