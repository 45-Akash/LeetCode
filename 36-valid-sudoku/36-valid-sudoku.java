class Solution {
    public boolean isValidSudoku(char[][] board)
    {
        for(int i=0; i<9; i++)
        {
            Map<Character,Integer>hmp = new HashMap<>();
            for(int j=0; j<9; j++)
            {
                if(board[i][j] != '.'){
                if(hmp.containsKey(board[i][j]))  return false;
                else                              hmp.put(board[i][j], 1);
                }
            }
            hmp.clear();
        }
        
        for(int i=0; i<9; i++)
        {
            Map<Character,Integer>hmp = new HashMap<>();
            for(int j=0; j<9; j++)
            {
                if(board[j][i] != '.'){
                if(hmp.containsKey(board[j][i]))  return false;
                else                              hmp.put(board[j][i], 1);
                }
            }
            hmp.clear();
        }
        
        for(int i=0; i<9; i += 3)
        {
            for(int j=0; j<9; j += 3)
            {
                Map<Character,Integer>hmp = new HashMap<>();
                int row = i+3;
                int col = j+3;
                for(int p=i; p<row; p++)
                {
                    for(int q=j; q<col; q++)
                    {
                        if(board[p][q] != '.'){
                        if(hmp.containsKey(board[p][q]))  return false;
                        else                              hmp.put(board[p][q], 1);
                        }
                    }
                }
              hmp.clear();  
            }
        }
      return true;                                              
                                                    
    }
}