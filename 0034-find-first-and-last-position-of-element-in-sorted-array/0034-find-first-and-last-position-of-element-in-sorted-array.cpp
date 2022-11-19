class Solution {
public:
    int firstoccr(vector<int>&arr, int key, int size)
    {
        int s=0;
        int e=size-1;
        int ans = -1;
        while(s<=e)
        {
            int mid = s + (e-s)/2;
            if(arr[mid]==key)
            {
                ans = mid;
                e = mid-1;
            }
            else if(arr[mid] > key)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
    return ans;
    }
    
    int lastoccr(vector<int>&arr, int key, int size)
    {
        int s=0;
        int e=size-1;
        int ans = -1;
        while(s<=e)
        {
            int mid = s + (e-s)/2;
            if(arr[mid]==key)
            {
                ans = mid;
                s = mid+1;
            }
            else if(arr[mid] > key)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
    return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int>vec;
        int size = nums.size();
        
        int firstIndex = firstoccr(nums,target,size);
        if(firstIndex == -1)
        {
            vec.push_back(-1);
            vec.push_back(-1);
            return vec;
        }
        int lastIndex = lastoccr(nums,target,size);
        
        vec.push_back(firstIndex);
        vec.push_back(lastIndex);
    return vec;
    }
};