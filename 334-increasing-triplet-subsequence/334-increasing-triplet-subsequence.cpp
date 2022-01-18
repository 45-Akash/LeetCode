class Solution {
public:
    
    bool increasingTriplet(vector<int>& nums)
    {
        int size=nums.size();
        if(size < 3)          return false;
        
        int left=INT_MAX;
        int mid=INT_MAX;
        
        for(int i=0; i<size; i++)
        {
            if(nums[i]>mid)   
            {
                cout<<left<<" "<<mid<<" "<<nums[i]<<endl;
                return true;
            }
            else if(nums[i]>left && nums[i]<mid)    mid=nums[i];
            else if(nums[i]<left)                   left=nums[i];
        }
    return false;   
    }
};