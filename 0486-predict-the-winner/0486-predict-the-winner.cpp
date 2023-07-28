class Solution {
public:
    int score(vector<int>&nums,int s, int e, int sum, bool turn)
    {
        if(s>e)
        {
            return sum;
        }
        
        if(turn)
        {
           return max(score(nums, s+1, e, sum+nums[s], false),
                        score(nums, s, e-1, sum+nums[e], false));
        }
        else
        {
            return min(score(nums, s+1, e, sum-nums[s], true),
                        score(nums, s, e-1, sum-nums[e], true));
        }
    }
    bool PredictTheWinner(vector<int>& nums)
    {
        long long sum = accumulate(nums.begin(), nums.end(), 0);
        
        int s=0, e=nums.size()-1;
        bool turn = true;
        
        if(score(nums, s, e, 0, turn)>=0)
        {
            return true;
        }
    return false; 
    }
};