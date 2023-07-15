class Solution {
public:
    int matrixSum(vector<vector<int>>& nums)
    {
        int sum = 0;
        map<int,int>mp;
        int r = nums.size();
        int c = nums[0].size();
        
        for(int i=0; i<nums.size(); i++)
        {
            sort(nums[i].begin(), nums[i].end());
        }
        
        for(int i=0; i<c; i++)
        {
            int max_val = INT_MIN;
            for(int j=0; j<r; j++)
            {
                max_val = max(max_val, nums[j][i]);
            }
            sum += max_val;
        }
    return sum;
    }
};