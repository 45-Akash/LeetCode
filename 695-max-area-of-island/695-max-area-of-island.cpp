class Solution {
public:
    int maxArea(vector<vector<int>>& grid, int i, int j, int r, int c)
    {
        if(i==r || i==-1 || j==c || j==-1)
        {
            return 0;
        }
        if(grid[i][j]==0 || grid[i][j]==-1)
        {
            return 0;
        }
        grid[i][j] = -1;
        int up = maxArea(grid, i+1, j, r, c);
        int down = maxArea(grid, i-1, j, r, c);
        int left = maxArea(grid, i, j-1, r, c);
        int right = maxArea(grid, i, j+1, r, c);
        return 1+left+right+up+down;
    
    }
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int max_area = 0;
        int r=grid.size();
        int c=grid[0].size();
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(grid[i][j]==1)
                {
                    int score = maxArea(grid, i, j, r, c);
                    max_area = max(max_area, score);
                }
            }
        }
    return max_area;
    }
};