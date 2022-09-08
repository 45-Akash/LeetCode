class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) 
    {
        int n = arr.size();
        vector<int>dp(n+2, 0);
        
        for(int i=n-1; i>=0; i--)
        {
            int max_ans = INT_MIN;
            int len = 0, maxi = INT_MIN;
            for(int j=i; j<min(i+k, n); j++)
            {
                len++;
                maxi = max(maxi, arr[j]);
                int sum = (maxi*len) + dp[j+1];
                max_ans = max(max_ans, sum);
            }
            dp[i] = max_ans;
        }
    return dp[0];
    }
};