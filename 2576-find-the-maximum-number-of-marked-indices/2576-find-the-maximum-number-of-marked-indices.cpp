class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums)
    {
        int n = nums.size();
        int ind = 0;
        
        sort(nums.begin(), nums.end());
        for(int mid = (n+1)/2; mid<n; mid++)
        {
            if(nums[ind]*2 <= nums[mid])
            {
                ind++;
            }
        }
        int count =  2*ind;
    return count;
    }
};