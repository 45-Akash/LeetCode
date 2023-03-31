class Solution {
public:
    int countDistinctIntegers(vector<int>& nums)
    {
        map<int, int>mp;
        
        for(auto it:nums)
        {
            // cout<<it<<" ";
            mp[it]++;
            int val = it;
            int newNum=0;
            
            while(val!=0)
            {
                newNum = newNum* 10 + val%10;
                val/=10;
            }
            mp[newNum]++;
        }
        
        // for(auto it:mp) cout<<it.first<<" ";
    return mp.size();
    }
};