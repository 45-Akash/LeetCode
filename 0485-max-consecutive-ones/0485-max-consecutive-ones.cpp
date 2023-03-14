class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int ans = 0;
        int cnt=0;
        int i=0;
        
        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                while(i<nums.size() && nums[i]==1)
                {
                    cnt++;
                    i++;
                }
                
                ans = max(ans, cnt);
                cnt=0;
            }
            else i++;
        }
    return ans;
    }
};