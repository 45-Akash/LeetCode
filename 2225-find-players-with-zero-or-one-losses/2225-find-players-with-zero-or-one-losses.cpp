class Solution {
public:
    static bool sortBy(vector<int>&v1, vector<int>&v2)
    {
        return v1[1] < v2[1];
    }
    vector<vector<int>> findWinners(vector<vector<int>>& matches)
    {
        vector<vector<int>>ans;
        vector<int>notLost;
        set<int>st1;
        sort(matches.begin(), matches.end(), sortBy);
        set<int>st;
        
        for(int i=0; i<matches.size(); i++)
        {
            st.insert(matches[i][1]);
        }
        
        for(int i=0; i<matches.size(); i++)
        {
            if(st.find(matches[i][0])==st.end())
            {
                st1.insert(matches[i][0]);
            }
        }
        
        vector<int>oneLost;
        unordered_map<int,int>mp;
        for(int i=0; i<matches.size(); i++)
        {
            mp[matches[i][1]]++;
        }
        
        for(auto it:mp)
        {
            if(it.second==1)
            {
                oneLost.push_back(it.first);
            }
        }
        for(auto it:st1)
        {
            notLost.push_back(it);
        }
        sort(oneLost.begin(), oneLost.end());
        
        ans.push_back(notLost);
        ans.push_back(oneLost);
    return ans;
    }
};