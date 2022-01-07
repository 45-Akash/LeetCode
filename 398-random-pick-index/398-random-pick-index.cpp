class Solution {
public:
    unordered_map<int,vector<int>>mp;
    Solution(vector<int>& nums)
    {
        srand(time(NULL));

        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]].push_back(i);
        }
        
    }
    
    int pick(int target)
    { 
        vector<int>v = mp[target];
        int size = v.size();
        int ind = rand()%size;
        if(ind==size) ind--;
        long int ans = v[ind];
    return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */