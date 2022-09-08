class Solution {
public:
    
    int solve(int i, int j, vector<int>cuts, vector<vector<int>>&dp)
    {
        if(i>j)    return 0;
        
        if(dp[i][j] != -1)    return dp[i][j];
        
        int mini = INT_MAX;
        for(int ind = i; ind<=j; ind++)
        {
            int cost = cuts[j+1]-cuts[i-1]+solve(i, ind-1, cuts, dp)+solve(ind+1, j, cuts, dp);
            mini = min(mini, cost);
        }
    return dp[i][j] = mini;
    }
    
    int minCost(int n, vector<int>& cuts)
    {
        sort(cuts.begin(), cuts.end());
        int len = cuts.size();
        cuts.insert(cuts.begin(), 0);
        cuts.push_back(n);
        
        vector<vector<int>>dp(len+2, vector<int>(len+2, 0));
        
        for(int i=len; i>=1; i--)
        {
            for(int j=1; j<=len; j++)
            {
                if(i>j) continue;
                int mini = INT_MAX;
                for(int ind = i; ind<=j; ind++)
                {
                    int cost = cuts[j+1]-cuts[i-1]+dp[i][ind-1]+dp[ind+1][j];
                    mini = min(mini, cost);
                }
                dp[i][j] = mini;
            }
            
        }
        return dp[1][len];
    }
};