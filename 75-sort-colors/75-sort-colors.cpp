class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int ones=0;
        int zeros=0;
        int twos =0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)         zeros++;
            if(nums[i]==1)         ones++;
            if(nums[i]==2)         twos++;
        }
        
        nums.clear();
        while(zeros--)      nums.emplace_back(0);
        while(ones--)       nums.emplace_back(1);
        while(twos--)       nums.emplace_back(2);
        
        
    }
};