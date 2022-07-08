class Solution {
public:
    
    int path(vector<vector<int>>& Grid, int r, int c, int row, int col, vector<vector<int>>& dp)
    {
        if(r==row-1 && c==col-1)    return 1;
        if(r==row || c==col)        return 0;
        
        if(dp[r][c] != -1)          return dp[r][c];
        if(Grid[r][c] == 1)         return 0;
        
        int down = path(Grid, r, c+1, row, col, dp);
        
        int right = path(Grid, r+1, c, row, col, dp);
        
        return dp[r][c] = down + right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& Grid)
    {
        int row = Grid.size();
        int col = Grid[0]. size();
        
        if(Grid[row-1][col-1]==1)   return 0;
        
        vector<vector<int>>dp(row);
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                dp[i].push_back(-1);
            }
        }
        
        return path(Grid, 0, 0, row, col, dp);
    }
};