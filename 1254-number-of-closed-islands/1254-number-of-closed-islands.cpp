class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& grid, vector<vector<int>> &vis)
    {
        int n = grid.size();
        int m = grid[0].size();
        vis[r][c]=1;

        vector<int>drow = {0, -1, 0, 1};
        vector<int>dcol = {-1, 0, 1, 0};
        for(int i=0; i<4; i++)
        {
            int row = r + drow[i];
            int col = c + dcol[i];

            if(row<n && row>=0 && col<m && col>=0 && vis[row][col]==0 && grid[row][col]==0)
            {
                dfs(row, col, grid, vis);
            }
        }

    }

    int closedIsland(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        vector<vector<int>>vis(n, vector<int>(m, 0));
        for(int i=0; i<n; i++)
        {
            if(grid[i][0]==0 && vis[i][0]==0)
            {
                dfs(i, 0, grid, vis);
            }
            if(grid[i][m-1]==0 && vis[i][m-1]==0)
            {
                dfs(i, m-1, grid, vis);
            }
        }    

        for(int i=0; i<m; i++)
        {
            if(grid[0][i]==0 && vis[0][i]==0)
            {
                dfs(0, i, grid, vis);
            }
            if(grid[n-1][i]==0 && vis[n-1][i]==0)
            {
                dfs(n-1, i, grid, vis);
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==0 && vis[i][j]==0)
                {
                    // cout<<i<<" "<<j<<endl;
                    ans++;
                    dfs(i, j, grid, vis);
                    
                }
            }
        }
    return ans;
    }
};