class Solution {
public:
    
    int rober(vector<int>&nums, int ind, int n, vector<vector<int>>&dp, int sum)
    {
        if(ind >= n)     return sum;
        
        if(dp[ind][sum]!=-1)  return dp[ind][sum];
        
        sum += nums[ind];
        int left = rober(nums, ind+2, n, dp, sum);
        
        sum -= nums[ind];
        int right = rober(nums, ind+1, n, dp, sum);
        
        return dp[ind][sum] = max(right, left);
    }
    int rob(vector<int>& nums)
    {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        vector<vector<int>>dp(n);
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=sum; j++)    dp[i].push_back(-1);
        }
        
        return rober(nums, 0, n, dp, 0);
    }
};