class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        bool res = next_permutation(nums.begin(), nums.end());
        if(res==false)
        {
            sort(nums.begin(), nums.end());  
        }
    
    }
};