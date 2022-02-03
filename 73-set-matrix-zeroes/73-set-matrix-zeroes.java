class Solution {
    public void setZeroes(int[][] matrix)
    {
        Set<Integer>row = new HashSet<>();   
        Set<Integer>col = new HashSet<>();
        
        for(int i=0; i<matrix.length; i++)
        {
            for(int j=0; j<matrix[i].length; j++)
            {
                if(matrix[i][j]==0) 
                {
                    row.add(i);
                    col.add(j);
                }
            }
        }
        
        for(Integer it : row)
        {
            for(int i=0; i<matrix[0].length; i++)
            {
                matrix[it][i]=0;
            }
        }
        
        for(Integer it : col)
        {
            for(int i=0; i<matrix.length; i++)
            {
                matrix[i][it]=0;
            }
        }
    }
}