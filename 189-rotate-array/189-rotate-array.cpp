class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        int i,j,size;
        int len = nums.size();
        size = k%len;
        vector<int>vec;
        
        for(int i=len-size; i<len; i++)     vec.push_back(nums[i]);
        for(int i=0; i<len-size; i++)       vec.push_back(nums[i]);
        
        
        for(int i=0; i<vec.size(); i++)     nums[i]=vec[i];
        
        
    }
};