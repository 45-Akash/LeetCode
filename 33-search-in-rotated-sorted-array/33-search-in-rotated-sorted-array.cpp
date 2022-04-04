class Solution {
public:
    int pivot(vector<int>&arr)
    {
        int n=arr.size();
        int s=0,e=n-1;
        
        while(s<e)
        {
            int m=s+(e-s)/2;
            if(arr[m]>=arr[0])      s=m+1;
            else                    e=m;
        }
    return s;
    }
    
    int solve(int s, int e, vector<int>arr, int t)
    {
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(arr[m]==t)               return m;
            else if(arr[m]>t)           e=m-1;
            else                        s=m+1;
        }
    return -1;
    }
    int search(vector<int>& nums, int target)
    {
        int n=nums.size();
        int p=pivot(nums);

        if(nums[p]<=target && target<=nums[n-1])
        {
            int start=p,end=n-1;
            return solve(start,end,nums,target);
        }
        
        int start=0,end=p-1;
    return solve(start,end,nums,target);   
    }
};