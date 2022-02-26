class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        vector<int>vec(nums);
        nums.clear();
        nums.resize(vec.size());
        int j=0;
        
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i] != 0)
            {
                nums[j++] = vec[i];
            }
        }
        
    }
};