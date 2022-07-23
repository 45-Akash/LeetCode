class Solution {
public:
    int partitionArray(vector<int>& nums, int k)
    {
        int count=0;
        sort(nums.begin(), nums.end());
        
        int mini = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            int diff = nums[i]-mini;
            if(diff>k)
            {
                count++;
                mini = nums[i];
            }
        }
        
        return (count+1);
    }
};