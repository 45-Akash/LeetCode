class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr)
    {
        int s=0;
        int e=arr.size()-1;
        int ans;
        
        while(s<=e)
        {
            int m = s+(e-s)/2;
            if(m==0)               m=1;
            if(m==arr.size()-1)    m=arr.size()-2;
            
            if(arr[m]>arr[m-1] && arr[m]>arr[m+1])
            {
                ans=m;
                break;
            }
            if(arr[m]>arr[m-1])
            {
                s=m+1;
            }
            else
            {
                e=m-1;
            }
        }
    return ans;
    }
};