//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		vector<int>ds;
		int i=0;
		
		for(int i=0; i<N; i++)
		{
		    int r=i;
		    int j=0;
    		while(r>=0 && j>=0)
    		{
    		    ds.push_back(A[j][r]);
    		    r--;
    		    j++;
    		}
		}
		
		for(int i=1; i<N; i++)
		{
		    int r=i;
		    int j=N-1;
		    
		    while(r<N && j>=0)
		    {
		        ds.push_back(A[r][j]);
		        r++;
		        j--;
		    }
		}
	return ds;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends