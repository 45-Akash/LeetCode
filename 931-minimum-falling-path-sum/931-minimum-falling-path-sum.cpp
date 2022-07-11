class Solution {
public:
    int fall(vector<vector<int>>& mat, int r, int c, int row, int col, vector<vector<int>>&dp)
    {
        if(c<0 || c==col)    return INT_MAX;
        if(r==row-1)         return mat[r][c];
        
        if(dp[r][c] != -1)   return dp[r][c];
        
        int left = fall(mat, r+1, c-1, row, col, dp);
        int right = fall(mat, r+1, c+1, row, col, dp);
        int down = fall(mat, r+1, c, row, col, dp);
        
        int Min = min(left, right);
        Min = min(Min, down);
        return dp[r][c] = mat[r][c] + Min;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>>dp(row);
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)       dp[i].push_back(-1);
        }
        
        int ans = INT_MAX;
        for(int i=0; i<col; i++)
        {
            ans = min(ans, fall(matrix, 0, i, row, col, dp));
        }
    return ans;
    }
};