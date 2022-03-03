class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr)
    {
        int n=arr.size();
        for(int i=1; i<n; i++)      arr[i] += arr[i-1];
        
        int sum=0;
        for(int size=1; size<=n; size+=2)
        {
            for(int i=0; i<=n-size; i++)
            {
                if(i==0)    sum += arr[size-1];
                else        sum += arr[i+size-1]-arr[i-1];
            } 
        }
    return sum;
    }
};