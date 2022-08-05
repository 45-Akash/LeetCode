class Solution {
public:
    int comb(vector<int>nums, int n, int T, vector<int>&dp)
    {
        if(T==0)           return 1;
        if(T<0)            return 0;
        
        if(dp[T] != -1)      return dp[T];
        
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            ans += comb(nums, n, T-nums[i], dp);
        }
        return dp[T] = ans;
    }
    int combinationSum4(vector<int>& nums, int target)
    {
        int n = nums.size();
        vector<int>dp(target+1, -1);
        
        return comb(nums, n, target, dp);
    }
};