class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<string>org;
        vector<vector<string>>res;
        unordered_map<string,vector<int>>mp;
        
        //copy original vector into new one
        for(auto it : strs)      org.push_back(it);
        
        //sort all the string of vector
        for(int i=0; i<strs.size(); i++)
        {
            sort(strs[i].begin(), strs[i].end());
        }
        
        //store the strings in map and their index
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