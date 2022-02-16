class Solution {
    public List<String> printVertically(String s)
    {
        String str[] = s.split(" ");
        
        int col=str.length;
        int r=0;
        
        for(int i=0; i<col; i++)
        {
            r = Integer.max(r, str[i].length());
        }
        
        char ds[][] = new char[col][r];
        for(int i=0; i<col; i++)
        {
            for(int j=0; j<r; j++)
            {
                if(j<str[i].length())      ds[i][j] = str[i].charAt(j);
                else                       ds[i][j] = ' ';
            }
        }
        char ans[][] = new char[r][col];
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<col; j++)
            {
                ans[i][j] = ds[j][i];
            }
        }
        
        List<String>res = new ArrayList<>();
        for(int i=0; i<r; i++)
        {
            String sub ="";
            String Str ="";
            
            for(int j=0; j<col; j++)      sub+=ans[i][j];
            int last = sub.length()-1;
            while(last>=0 && sub.charAt(last)==' ')    last--;
            for(int j=0; j<=last; j++)     Str += sub.charAt(j);
            res.add(Str);
        }
    return res;    
    }
}