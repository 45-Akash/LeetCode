//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    
    void dfs(int r, int c,vector<vector<int>>& grid, vector<vector<int>>& vis, vector<pair<int,int>>&vec, int baseR, int baseC)
    {
        vis[r][c] = 1;
        vec.push_back({r-baseR, c-baseC});
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int>drow = {0, -1, 0, 1};
        vector<int>dcol = {-1, 0, 1, 0};
        
        for(int i=0; i<4; i++)
        {
            int row = r + drow[i];
            int col = c + dcol[i];
            
            if(row<n && row>=0 && col<m && col>=0 && vis[row][col]==0 && grid[row][col]==1)
            {
                dfs(row, col, grid, vis, vec, baseR, baseC);
            }
        }
        
    }
    int countDistinctIslands(vector<vector<int>>& grid)
    {
        int r=grid.size();
        int c=grid[0].size();
        
        set<vector<pair<int,int>>>st;
        vector<vector<int>>vis(r, vector<int>(c));
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(vis[i][j]==0 && grid[i][j]==1)
                {
                    vector<pair<int,int>>vec;
                    dfs(i, j, grid, vis, vec, i, j);
                    st.insert(vec);
                }
            }
        }
    return st.size();        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends