class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
       auto it = lower_bound(nums.begin(), nums.end(), target);
       int index = it-nums.begin();
        
       if(it != nums.end())
       {
           return index;
       }
        else
        {
            int pos=0;
            int flag2=0;
            for(auto it : nums)
            {
                if(target < it){
                    flag2=1;
                    return pos;
                }
                pos++;
            }
            if(flag2==0)
            {
                return nums.size();
            }
        }
        return 1;
    }
};