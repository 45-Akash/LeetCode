class Solution {
public:
    bool search(vector<int>& nums, int target)
    {
        vector<int>vec;
        int pivot;
        int size = nums.size();
        
        for(int i=1; i<size; i++)
        {
            if(nums[i] < nums[i-1])
            {
                pivot = i;
                break;
            }
        }
        
        for(int i=pivot; i<size; i++)   vec.push_back(nums[i]);
        for(int i=0; i<pivot; i++)      vec.push_back(nums[i]);
        
        int s=0;
        int e=size-1;
        
        while(s <= e)
        {
            int mid = s + (e-s)/2;
            
            if(vec[mid] == target)       return true;
            else if(vec[mid] > target)   e=mid-1;
            else                         s=mid+1;
        }
    return false;
     
    }
};