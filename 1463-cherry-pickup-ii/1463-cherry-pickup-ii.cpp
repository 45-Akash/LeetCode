class Solution {
public:
    int dp[101][101][101];
    int pickup(vector<vector<int>>&grid, int row, int col, int ind, int c1, int c2)
    {
        if(c1<0 || c1==col || c2<0 || c2==col)     return -1e8;
        if(ind == row-1)
        {
            if(c1==c2)     return grid[ind][c1];
            else           return grid[ind][c1] + grid[ind][c2];
        }
        
        if(dp[ind][c1][c2] != -1)       return dp[ind][c1][c2];
        
        int maxi = INT_MIN;
        for(int i=-1; i<2; i++)
        {
            for(int j=-1; j<2; j++)
            {
                int value=0;
                if(c1==c2)    
                {
                    value = grid[ind][c1];
                }
                else
                {
                    value = grid[ind][c1] + grid[ind][c2];
                }
                
                value += pickup(grid, row, col, ind+1, c1+i, c2+j);
                maxi = max(maxi, value);
            }
        }
        
        return dp[ind][c1][c2] = maxi;
    }
    int cherryPickup(vector<vector<int>>& grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        memset(dp, -1, sizeof(dp));
        
        return pickup(grid, row, col, 0, 0, col-1);
    }
};