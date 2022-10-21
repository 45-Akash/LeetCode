//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)
    {
        vector<int>ans(R*C, 0);
       
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = R-1;
        int endingCol = C-1;
        
        int count = 1;
        int total = R*C;
        int ind=0;
        
        while(count <= total)
        {
            //insert in starting Row
            for(int index = startingCol; count <= total && index <= endingCol; index++)
            {
                ans[ind++] = a[startingRow][index];
                count++;
            }
            startingRow++;
            
            //insert into ending column
            for(int index = startingRow; count <= total && index <= endingRow; index++)
            {
                ans[ind++] = a[index][endingCol];
                count++;
            }
            endingCol--;
            
            //insert into ending Row
            for(int index = endingCol; count <= total && index >= startingCol; index--)
            {
                ans[ind++] = a[endingRow][index];
                count++;
            }
            endingRow--;
            
            //insert into starting Column
            for(int index = endingRow; count <= total && index >= startingRow; index--)
            {
                ans[ind++] = a[index][startingCol];
                count++;
            }
            startingCol++;
        }
        reverse(ans.begin(), ans.end());
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends