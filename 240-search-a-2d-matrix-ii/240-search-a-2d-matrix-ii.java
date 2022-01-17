class Solution {
    public boolean searchMatrix(int[][] matrix, int target)
    {
        int row = matrix.length;
        int col = matrix[0].length;
        
        // System.out.print(row+" "+col);
        int i=0; 
        int j=col-1;
        
        while(i<row && j>=0)
        {
            if(matrix[i][j]==target)     return true;
            
            if(matrix[i][j] > target)    j--;
            else                         i++;
        }
    return false;    
    }
}