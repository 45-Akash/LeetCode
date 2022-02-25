class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        int i,j,pivot;
        int len = nums.size();
        pivot = k%len;
        vector<int>vec;
        
        for(int i=len-pivot; i<len; i++)     vec.push_back(nums[i]);
        for(int i=0; i<len-pivot; i++)       vec.push_back(nums[i]);

        for(int i=0; i<vec.size(); i++)     nums[i]=vec[i]; 
    }
};