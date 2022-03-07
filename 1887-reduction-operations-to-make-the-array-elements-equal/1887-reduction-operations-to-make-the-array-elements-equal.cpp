class Solution {
public:
    int reductionOperations(vector<int>& nums)
    {
        int cnt=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        
        set<int>st;
        for(auto it:nums)          
        {
            st.insert(it);
            mp[it]++;
        }
        vector<int>ds;
        for(auto it:st)            ds.push_back(it);
        
        for(int i=1; i<ds.size(); i++)
        {
            cnt += (i*mp[ds[i]]);
        }
        
        
    return cnt;
    }
};