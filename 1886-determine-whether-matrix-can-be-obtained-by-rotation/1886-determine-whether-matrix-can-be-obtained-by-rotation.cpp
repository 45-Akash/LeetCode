class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target)
    {
        int f=0;
        int row=mat.size();
        int col=mat.size();
        
        int r=0,c=0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(mat[r][c]!=target[i][j])
                {
                    f=1;
                    break;
                }
                c = (c+1)%row;
            }
            r++;
        }
        
        if(f==0) return true;
        r=row-1;
        c=0;
        f=0;
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(mat[r][c]!=target[i][j])
                {
                    f=1;
                    break;
                }
                if(r==0)  r=row-1;
                else      r--;
            }
            c++;
        }
        
        if(f==0) return true;
        
        r=row-1;
        c=col-1;
        f=0;
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(mat[r][c]!=target[i][j])
                {
                    f=1;
                    break;
                }
                if(c==0)  c=col-1;
                else      c--;
            }
            r--;
        }
        
        if(f==0)  return true;
        
        r=0;
        c=col-1;
        f=0;
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(mat[r][c]!=target[i][j])
                {
                    f=1;
                    break;
                }
                r = (r+1)%row;
            }
            c--;
        }
       if(f==0) return true;
    return false;
        
    }
};