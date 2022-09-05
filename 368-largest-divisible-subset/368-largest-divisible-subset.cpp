class Solution {
public:
    
    vector<int> largestDivisibleSubset(vector<int>& nums)
    {
        int n = nums.size();
        vector<int>dp(n,1);
        vector<int>hash(n);
        sort(nums.begin(), nums.end());
        
        int last_ind = 0;
        int maxi = 1;
        for(int i=0; i<n; i++)
        {
            hash[i] = i;
            for(int prev = 0; prev<i; prev++)
            {
                if(nums[i] % nums[prev] == 0 && dp[i] < 1+dp[prev])
                {
                    dp[i] = 1+dp[prev];
                    hash[i] = prev;
                }
            }
            if(maxi < dp[i])
            {
                maxi = dp[i];
                last_ind = i;
            }
        }
        
        vector<int>ans;
        ans.push_back(nums[last_ind]);
        
        while(last_ind != hash[last_ind])
        {
            last_ind = hash[last_ind];
            ans.push_back(nums[last_ind]);
        }
        reverse(ans.begin(), ans.end());
    return ans;
        
    }
};