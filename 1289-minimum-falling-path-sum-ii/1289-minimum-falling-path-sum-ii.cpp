class Solution {
public:
    int fall(vector<vector<int>>& grid, int r, int c, int row, int col, vector<vector<int>>& dp)
    {
        if(r==row-1)         return grid[r][c];
        if(dp[r][c] != -1)   return dp[r][c];
        
        int sum=INT_MAX;
        for(int i=0; i<col; i++)
        {
            if(i != c)
            {
                int right = fall(grid, r+1, i, row, col, dp);
                sum = min(sum, right);
            }
        }
        return dp[r][c] = grid[r][c] + sum;
    }
    int minFallingPathSum(vector<vector<int>>& grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        
        vector<vector<int>>dp(row);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)    dp[i].push_back(-1);
        }
        
        int ans = INT_MAX;
        for(int i=0; i<col; i++)
        {
            ans = min(ans, fall(grid, 0, i, row, col, dp));
        }
    return ans;
    }
};