class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        long int product = 1;
        int count0 = 0;
        
        for(auto it : nums)
        {
            if(it == 0)   count0++;
            else          product*=it;
        }
        
        if(count0 == 1)
        {
            for(int i=0; i<nums.size(); i++)        
            {
                if(nums[i]==0)     nums[i] = product;
                else               nums[i] = 0;
            }
        }
        else if(count0>1)
        {
            for(int i=0; i<nums.size(); i++)        nums[i]=0;
        }
        else
        {
            for(int i=0; i<nums.size(); i++) 
            {
                if(nums[i] != 0)    nums[i] = product/nums[i];
            }
        }
   
       return nums; 
        
    }
};