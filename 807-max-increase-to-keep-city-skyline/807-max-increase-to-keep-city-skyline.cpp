class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid)
    {
        int preSum = 0;
        int r = grid.size();
        int c = grid[0].size();
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)      preSum += grid[i][j];
        }
        
        vector<int>row(r,0);
        vector<int>col(c,0);
        
        for(int i=0; i<r; i++)
        {
            int maxR=INT_MIN;
            for(int j=0; j<c; j++)
            {
                if(grid[i][j] > maxR)        maxR = grid[i][j];
            }
            row[i] = maxR;
        }
        
        for(int i=0; i<c; i++)
        {
            int maxR=INT_MIN;
            for(int j=0; j<r; j++)
            {
                if(grid[j][i] > maxR)        maxR = grid[j][i];
            }
            col[i] = maxR;
        }
        
        int postSum = 0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)   
            {
                grid[i][j] = min(row[i], col[j]);
                postSum += grid[i][j];
            }
        }
    return postSum-preSum;
        
    }
};