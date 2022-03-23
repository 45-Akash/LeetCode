class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int size=nums.size();
        vector<int>vec(size,-1);
        
        for(int i=0; i<size; i++)
        {
            for(int j=(i+1)%size; j!=i; )
            {
                if(nums[j]>nums[i])    
                {
                    vec[i]=nums[j];
                    break;
                }
                j=(j+1)%size;
                    
            }
        }
        
        return vec;
    }
};