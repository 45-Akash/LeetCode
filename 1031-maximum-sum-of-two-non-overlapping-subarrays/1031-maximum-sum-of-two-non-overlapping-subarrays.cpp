class Solution {
public:
    int solve(vector<int>& nums, int x, int y)
    {
        int n = nums.size();
        int dp1[n];
        int dp2[n];
        
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            if(i<x)
            {
                sum += nums[i];
                dp1[i] = sum;
            }
            else
            {
                sum += nums[i] - nums[i-x];
                dp1[i] = max(dp1[i-1],sum);
            }
        }
        sum=0;
        
        for(int i=n-1; i>=0; i--)
        {
            if(i+y>=n)
            {
                sum += nums[i];
                dp2[i] = sum;
            }
            else
            {
                sum += nums[i] - nums[i+y];
                dp2[i] = max(dp2[i+1], sum);
            }
        }
        
        int ans = 0;
        for(int i=x-1; i<n-y; i++)
        {
            ans = max(ans, dp1[i]+dp2[i+1]);
        }
        return ans;
    }
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) 
    {
        int ans = max(solve(nums, firstLen, secondLen), solve(nums, secondLen, firstLen));
        return ans;
    }
};