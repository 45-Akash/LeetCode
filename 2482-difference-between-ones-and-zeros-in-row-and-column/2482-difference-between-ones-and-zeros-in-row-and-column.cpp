class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        
        vector<int>oneRow(row);
        vector<int>oneCol(col);
        vector<int>zeroRow(row);
        vector<int>zeroCol(col);
        
        for(int i=0; i<row; i++)
        {
            int ones=0, zeros=0;
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]==0) zeros++;
                else              ones++;
            }
            oneRow[i] = ones;
            zeroRow[i] = zeros;
        }
        
        for(int i=0; i<col; i++)
        {
            int ones=0, zeros=0;
            for(int j=0; j<row; j++)
            {
                if(grid[j][i]==0) zeros++;
                else              ones++;
            }
            oneCol[i] = ones;
            zeroCol[i] = zeros;
        }
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                int cal = oneRow[i] + oneCol[j] - zeroRow[i] - zeroCol[j];
                grid[i][j] = cal;
            }
        }
    return grid;
    }
};