class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat)
    {
        int r = mat.size();
        int c = mat[0].size();
       
        for(int i=0; i<r; i++)
        {
            int row=i,col=0;
            vector<int>l;
            while(row<r && col<c)
            {
                l.push_back(mat[row][col]);
                row++;
                col++;
            }
            int diff = row-col;
            sort(l.begin(), l.end());
            
            row = i, col = 0;
            for(int p=0; p<l.size(); p++)
            {
                mat[row][col] = l[p];
                row++;
                col++;
            }
        }
        
        for(int i=1; i<c; i++)
        {
            int row = 0, col = i;
            vector<int>l;
            while(row<r && col<c)
            {
                l.push_back(mat[row][col]);
                row++;
                col++;
            }
            
            int diff = row-col;
            sort(l.begin(), l.end());
            row = 0, col = i;
            for(int p=0; p<l.size(); p++)
            {
                mat[row][col] = l[p];
                row++;
                col++;
            }
        }
    return mat;   
        
    }
};