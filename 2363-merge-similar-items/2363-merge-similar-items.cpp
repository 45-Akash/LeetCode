class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2)
    {
        map<int,int>mp;
        vector<vector<int>>ans;
        
        for(int i=0; i<items1.size(); i++)
        {
            mp[items1[i][0]] += items1[i][1];
        }
        
        for(int i=0; i<items2.size(); i++)
        {
            mp[items2[i][0]] += items2[i][1];
        }
        
        for(auto it:mp)
        {
            vector<int>l;
            l.push_back(it.first);
            l.push_back(it.second);
            ans.push_back(l);
        }
    return ans;
    }
};