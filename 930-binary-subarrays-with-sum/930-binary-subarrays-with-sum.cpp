class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal)
    {
        int n = nums.size();
        int count=0;
        vector<int>ds(n+1,0);
        ds[0]=nums[0];
        
        for(int i=0; i<n; i++)
        {
            ds[i+1] = ds[i] + nums[i];
        }
        
        unordered_map<int,int>mp;
        for(auto it : ds)
        {
            count += mp[it];
            mp[it+goal]++;
        }
    return count;
    }
};