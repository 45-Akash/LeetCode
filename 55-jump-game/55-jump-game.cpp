class Solution {
public:
   
    bool canJump(vector<int>& nums)
    {
        int n = nums.size()-1;
        int rechable = 0;
        
        for(int i=0; i<=n; i++)
        {
            if(i>rechable)      return false;
            rechable = max(rechable, i+nums[i]);
        }
    return true;
    }
};