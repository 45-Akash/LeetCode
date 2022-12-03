class Solution {
public:
    bool areOccurrencesEqual(string s)
    {
        unordered_map<char,int>mp;
        
        int n = s.length(); 
        for(auto ch:s)        mp[ch]++;
        
        int frq=mp[s[0]];
        
        for(auto it:mp)
        {
            if(it.second != frq) return 0;
        }
    return 1;
    }
};