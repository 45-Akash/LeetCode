class Solution {
public:
    
    void helper(vector<vector<int>>& image, int sr, int sc, int r, int c, int newColor, int pc, vector<vector<int>>& visited)
    {
        
        if(sr==-1 || sr==r || sc==-1 || sc==c)            return;
        if(image[sr][sc] != pc || visited[sr][sc] != 0)   return;
        
        // cout<<"hi "<<sr<<" "<<sc<<endl;
        image[sr][sc] = newColor;
        visited[sr][sc]=1;
        
        helper(image, sr+1, sc, r, c, newColor, pc, visited);
        helper(image, sr-1, sc, r, c, newColor, pc, visited);
        helper(image, sr, sc+1, r, c, newColor, pc, visited);
        helper(image, sr, sc-1, r, c, newColor, pc, visited);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int r=image.size();
        int c=image[0].size();
        int parentColor = image[sr][sc];
        vector<vector<int>>visited(r);
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                visited[i].push_back(0);
            }
        }
        
        helper(image, sr, sc, r, c, newColor, parentColor, visited);
        
    return image;
    }
};