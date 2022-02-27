class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold)
    {
        int n=arr.size();
        int cnt=0;
        
        for(int i=1; i<n; i++)        arr[i] += arr[i-1];
        for(int i=0; i<=n-k; i++)
        {
            int sum = 0;
            if(i==0)          sum = arr[k-1];
            else              sum = arr[i+k-1] - arr[i-1];
            
            int avg = sum/(k);
            if(avg>=threshold)    cnt++;
        }
    return cnt;
    }
};