class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<vector<int>>ans;
        for(int i=0; i<col; i++)
        {
            vector<int>l;
            for(int j=0; j<row; j++)     l.push_back(0);
            ans.push_back(l);
        }
    
        
        for(int i=0; i<col; i++)
        {
            for(int j=0; j<row; j++)
            {
                ans[i][j] = matrix[j][i];
                
            }
        }
    return ans;
    }
};