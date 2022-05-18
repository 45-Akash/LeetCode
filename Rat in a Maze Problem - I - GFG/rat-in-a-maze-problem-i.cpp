// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

bool isSafe(int x, int y, vector<vector<int>>&visited, vector<vector<int>> &m, int n)
{
    if((x>=0 && x<n) && (y>=0 && y<n) && m[x][y]==1 && visited[x][y]==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void maze(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>>&visited, 
          vector<string>&ans, string path)
      {
          //base case
          if(x==n-1 && y==n-1)
          {
              ans.push_back(path);
          }
          
          visited[x][y]=1;
          
          //to move Down
          if(isSafe(x+1, y, visited, m, n))
          {
              path+='D';
              maze(m, n, x+1, y, visited, ans, path);
              path.pop_back();
          }
          
          if(isSafe(x-1, y, visited, m, n))
          {
              path+='U';
              maze(m, n, x-1, y, visited, ans, path);
              path.pop_back();
          }
          
          if(isSafe(x, y+1, visited, m, n))
          {
              path+='R';
              maze(m, n, x, y+1, visited, ans, path);
              path.pop_back();
          }
          
          if(isSafe(x, y-1, visited, m, n))
          {
              path+='L';
              maze(m, n, x, y-1, visited, ans, path);
              path.pop_back();
          }
          
          //backtrack mark visited as 0
          visited[x][y]=0;
      }
class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        int x=0;
        int y=0;
        
        vector<string>ans;
        if(m[0][0]==0)      return ans;
        
        vector<vector<int>>visited=m;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)   visited[i][j]=0;
        }
        
        maze(m, n, x, y, visited, ans, "");
    return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends