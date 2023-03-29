class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& board, int r, int c)
    {
        int count = 0;
        for(int p=-1; p<=1; p++)
        {
            for(int q=-1; q<=1; q++)
            {
                if(p==0 && q==0)
                {
                    continue;
                }
                int newRow = i+p;
                int newCol = j+q;
                
                if(!(newRow >= r || newRow<0 || newCol >= c || newCol < 0))
                {
                    if(board[newRow][newCol]==1) count++;
                }
            }
        }
    return count;
    }
    void gameOfLife(vector<vector<int>>& board)
    {
        int r = board.size();
        int c = board[0].size();
        vector<vector<int>>ds = board;
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                int count = solve(i, j, board, r, c);
                // cout<<i<<" "<<j<<" "<<count<<endl;
                if(board[i][j]==1)
                {
                    
                    if(count<2 || count >3)   ds[i][j]=0;
                    
                }
                else
                {
                    if(count==3)              ds[i][j]=1;
                }
            }
        }
        board = ds;
    }
};