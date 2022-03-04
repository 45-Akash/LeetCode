class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c)
    {
        vector<vector<int>>matrix;
        vector<int>dummy;
        int row = mat.size();
        int col = mat[0].size();
        
        if(row*col != r*c)       return mat;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                dummy.push_back(mat[i][j]);
            }
        }
        
        int ind=0;
        for(int i=0; i<r; i++)
        {
            vector<int>v;
            for(int j=0; j<c; j++)
            {
                v.push_back(dummy[ind++]);
            }
            matrix.push_back(v);
        }
    return matrix;
    }
};