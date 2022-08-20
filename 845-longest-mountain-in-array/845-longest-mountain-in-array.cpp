class Solution {
public:
    int longestMountain(vector<int>& arr) 
    {
        int n = arr.size();
        vector<int>Pfix(n,1);
        vector<int>Sfix(n,1);
        
        for(int i=1; i<n; i++)
        {
            if(arr[i-1]<arr[i])
            {
                Pfix[i] = Pfix[i-1]+1; 
            }
        }
        
        for(int i=n-2; i>=0; i--)
        {
            if(arr[i+1]<arr[i])
            {
                Sfix[i] = Sfix[i+1]+1;
            }
        }
        
        int ans = INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(Pfix[i] != 1 && Sfix[i] != 1) 
            {
                int sum = Pfix[i] + Sfix[i]-1;
                ans = max(ans, sum);
            }
        }
    return ans<3 ? 0 : ans;
    }
};