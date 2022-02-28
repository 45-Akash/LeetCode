class Solution {
public:
    int largestPerimeter(vector<int>& nums)
    {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(),nums.end());
        
        int e=n-1;
        while(e>=2 && nums[e-1]+nums[e-2] <= nums[e]) 
        {
            e--;
        }
        if(e==1)      return 0;
        sum = nums[e-1]+nums[e-2];
        return sum+nums[e];
  
    }
};