class Solution {
public:

    int jump(vector<int>& nums)
    {
        int n = nums.size();
        vector<int>dp(n, INT_MAX-n);
        dp[n-1] = 0;
        
        for(int i=n-2; i>=0; i--)
        {
            int num = nums[i];
            for(int j=i+1; j<=i+num; j++)
            {
                int fs = INT_MAX-n;
                if(j<n) fs=1+dp[j];
                dp[i] = min(dp[i], fs);
            }
        }
    return dp[0];   
    }
};