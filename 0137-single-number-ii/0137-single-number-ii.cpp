class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        unordered_map<int,int>mp;
        int element;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
            
        }
        for(auto it:mp)
        {
            if(it.second==1)
            {
                element=it.first;
            }
        }
        return element;
    }
};