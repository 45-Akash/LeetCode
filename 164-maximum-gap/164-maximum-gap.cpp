class Solution {
public:
    int maximumGap(vector<int>& nums)
    {
        int n = nums.size();
        if(n<2) return 0;
        
        int max_diff=0;
        map<int,int>mp;
        for(auto it:nums)          mp[it]=1;
        
        auto ptr = mp.begin();
        int prev = ptr->first;
        for(auto it:mp)
        {
            int curr = it.first;
            int diff = curr-prev;
            max_diff = max(max_diff, diff);
            prev = curr;
        }
    return max_diff;
    }
};