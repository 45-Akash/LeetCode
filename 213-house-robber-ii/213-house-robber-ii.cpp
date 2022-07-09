class Solution {
public:
    int robber(vector<int>& nums, int ind, int n, vector<vector<int>>& dp, int sum)
    {
        if(ind >= n)         return sum;
        
        if(dp[ind][sum] != -1)    return dp[ind][sum];
        
        int left = robber(nums, ind+2, n, dp, sum+nums[ind]);
        int right = robber(nums, ind+1, n, dp, sum);
        
        return dp[ind][sum] = max(left, right);
    }
    int rob(vector<int>& nums)
    {
        int n=nums.size();
        if(n==1)           return nums[0];
        int sum = accumulate(nums.begin(), nums.end(), 0);
        vector<vector<int>>dp(n);
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=sum; j++)   dp[i].push_back(-1);
        }
        
        return max(robber(nums, 1, n, dp, 0), robber(nums, 0, n-1, dp, 0));
    }
};