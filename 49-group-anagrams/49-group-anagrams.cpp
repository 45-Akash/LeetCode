class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<string>org;
        vector<vector<string>>res;
        unordered_map<string,vector<int>>mp;
        for(auto it : strs)      org.push_back(it);
        
        for(int i=0; i<strs.size(); i++)
        {
            sort(strs[i].begin(), strs[i].end());
        }
        
        for(int i=0; i<strs.size(); i++)
        {
            mp[strs[i]].push_back(i);
        }
        
        for(auto it:mp)
        {
            vector<int>v = it.second;
            vector<string>s;
            
            for(auto jt:v)
            {
                s.push_back(org[jt]);
            }
            res.push_back(s);
        }
        
    return res;  
    }
};