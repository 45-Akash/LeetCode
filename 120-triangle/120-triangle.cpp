class Solution {
public:
    
    int minTotal(vector<vector<int>>& t, int r, int c, int row, vector<vector<int>>& dp)
    {
        if(r==row-1)     return t[r][c];
        
        if(dp[r][c] != INT_MAX-row)     return dp[r][c];
        
        int left = t[r][c] + minTotal(t, r+1, c, row, dp);
        
        int right = t[r][c] + minTotal(t, r+1, c+1, row, dp);
        
        return dp[r][c] = min(left, right);
        
    }
    int minimumTotal(vector<vector<int>>& triangle)
    {
        int row = triangle.size();
        vector<vector<int>>dp(row);
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<i+1; j++)
            {
                dp[i].push_back(INT_MAX-row);
            }
        }
        
        return minTotal(triangle, 0, 0, row, dp);
    }
};