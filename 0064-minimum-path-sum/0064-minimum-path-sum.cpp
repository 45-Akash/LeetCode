class Solution {
public:
    int dp[201][201];
    int minSum(vector<vector<int>>& grid, int row, int col, int r, int c, int sum)
    {
        if(r==row-1 && c==col-1)   return sum+grid[r][c];
        
        if(r == row || c == col)   return INT_MAX;
        
        if(dp[r][c] != -1)         return dp[r][c];
        
        int down = minSum(grid, row, col, r+1, c, sum+grid[r][c]);
        int right = minSum(grid, row, col, r, c+1, sum+grid[r][c]);
        
        return dp[r][c] = min(down, right);
    }
    int minPathSum(vector<vector<int>>& grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        // int sum=0;
        // for(auto it:grid)
        // {
        //     for(auto jt:it)     sum += jt;
        // }
        // cout<<sum<<endl;
        memset(dp, -1, sizeof(dp));
        // cout<<"hi";
        
       
        vector<vector<int>>ds(row, vector<int>(col, 0));
        ds[0][0] = grid[0][0];
        for(int i=1; i<row; i++)  ds[i][0] = grid[i][0] + ds[i-1][0];
        for(int i=1; i<col; i++)  ds[0][i] = grid[0][i] + ds[0][i-1];
        
        for(int i=1; i<row; i++)
        {
            for(int j=1; j<col; j++)
            {
                ds[i][j] = grid[i][j] + min(ds[i-1][j], ds[i][j-1]);
            }
        }
        // return minSum(grid, row, col, 0, 0, 0);
        return ds[row-1][col-1];
    }
};