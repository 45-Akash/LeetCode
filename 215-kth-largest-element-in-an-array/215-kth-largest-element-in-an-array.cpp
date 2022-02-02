class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        sort(nums.begin(), nums.end(), greater<>());
        // reverse(nums.begin(), nums.end());
        return nums[k-1];
    }
};