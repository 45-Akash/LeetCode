class Solution {
public:
    
    int helper(vector<int>& nums, int val)
    {
        int cost=0;
        for(int i=0; i<nums.size(); i++)
        {
            cost += abs(nums[i]-val);
        }
        return cost;
    }
    
    int minMoves2(vector<int>& nums) {
        
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int cost=0;
        
        if(len%2==1)
        {
            int val = nums[len/2];
            cost = helper(nums, val);
        }
        else
        {
            int val1, val2;
            int cost1=0;
            int cost2=0;
            
            val1 = nums[len/2];
            cost1 = helper(nums, val1);
            
            val2 = nums[len/2-1];
            cost2 = helper(nums, val2);
            
            cost = min(cost1, cost2);
        }
    return cost;
        
    }
};