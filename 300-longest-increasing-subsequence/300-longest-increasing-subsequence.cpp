class Solution {
public:
    
    int LongIncSubsequence(int prev, int curr, int n, vector<int>&nums, vector<vector<int>>&dp)
    {
       if(curr == n)    return 0;
        
        if(dp[prev+1][curr]!=-1) return dp[prev+1][curr];
        
        int len = 0 + LongIncSubsequence(prev, curr+1, n, nums, dp);
        if(prev==-1 || nums[curr] > nums[prev])
        {
            len = max(len, 1+LongIncSubsequence(curr, curr+1, n, nums, dp));
        }
        return dp[prev+1][curr] = len;
    }
    
    int lengthOfLIS(vector<int>& nums)
    {
        int n = nums.size();
//         int Max_len = 0;
//         int size = nums.size();
//         vector<vector<int>>dp(n+1, vector<int>(n, -1));
        
//         return LongIncSubsequence(-1, 0, n, nums, dp);
        
        
        //O(n * log n)
        vector<int>ds;
        ds.push_back(nums[0]);
        
        for(int i=1; i<n; i++)
        {
            if(nums[i] > ds[ds.size()-1])
            {
                ds.push_back(nums[i]);
            }
            else
            {
                int ind = lower_bound(ds.begin(), ds.end(), nums[i]) - ds.begin();
                ds[ind] = nums[i];
            }
        }
    return ds.size();
    }
};