class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> ans;

        int row = n-1;
        int col = n-1;
        
        for(int i=0; i<=row; i++)
        {
            vector<int>v;
            for(int j=0; j<=col; j++)      v.push_back(0);
            ans.push_back(v);
        }
        
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row;
        int endingCol = col;
        
        int count = 1;
        int total = n*n;
        
        
        while(count <= total)
        {
            //insert in starting Row
            for(int index = startingCol; count <= total && index <= endingCol; index++)
            {
                ans[startingRow][index] = count;
                count++;
            }
            startingRow++;
            
            //insert into ending column
            for(int index = startingRow; count <= total && index <= endingRow; index++)
            {
                ans[index][endingCol] = count;
                count++;
            }
            endingCol--;
            
            //insert into ending Row
            for(int index = endingCol; count <= total && index >= startingCol; index--)
            {
                ans[endingRow][index] = count;
                count++;
            }
            endingRow--;
            
            //insert into starting Column
            for(int index = endingRow; count <= total && index >= startingRow; index--)
            {
                ans[index][startingCol] = count;
                count++;
            }
            startingCol++;
        }
    return ans;
    }
};