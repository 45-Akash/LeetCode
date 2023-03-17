class Solution {
public:
    int countPoints(string rings) 
    {
        int n = rings.length();
        
        unordered_map<char, set<char>>mp;
        for(int i=0; i<n-1; i+=2)
        {
            mp[rings[i+1]].insert(rings[i]);
        }
        int ans=0;
        
        for(auto it:mp)
        {
            if(it.second.size()==3) ans++;
        }
    return ans;
    }
};