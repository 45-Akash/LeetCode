class Solution {
public:
    int solve(vector<int>nums, int T, int ind, vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(T%nums[ind]==0)
            {
                return T/nums[ind];
            }
            else
            {
                return INT_MAX-1;
            }
        }
        
        if(dp[ind][T] != -1)       return dp[ind][T];
        
        int nonPick = solve(nums, T, ind-1, dp);
        int pick = INT_MAX-1;
        
        if(T>=nums[ind])
        {
            T=T-nums[ind];
            pick = 1+solve(nums, T-nums[ind], ind, dp);
        }
        
        return dp[ind][T] = min(pick, nonPick);
    }
    
    int coinChange(vector<int>& nums, int amount)
    {
        if(amount==0) return 0;
        int n = nums.size();
        vector<vector<int>>dp(n, vector<int>(amount+1, 0));
        
        for(int T=0; T<=amount; T++)
        {
            if(T%nums[0]==0)
            {
                dp[0][T] = T/nums[0];
            }
            else
            {
                dp[0][T] = INT_MAX-100;
            }
        }
        
        for(int i=1; i<n; i++)
        {
            for(int T=0; T<=amount; T++)
            {
                int nonPick = dp[i-1][T];
                int pick = INT_MAX-100;

                if(T>=nums[i])
                {
                    pick = 1+dp[i][T-nums[i]];
                }

                dp[i][T] = min(pick, nonPick);
            }
        }
        
        int ans = dp[n-1][amount];
        return ans==INT_MAX-100?-1:ans;
        
         
    }
};