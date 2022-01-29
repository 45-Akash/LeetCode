class Solution {
public:
    char findTheDifference(string s, string t)
    {
        unordered_map<char,int>mp;
        char ans;
        for(int i=0; i<s.length(); i++)
        {
            mp[s[i]]++;
        }
        
        for(int i=0; i<t.length(); i++)
        {
            if(mp[t[i]]==0)
            {
                ans = t[i];
                break;
            }
            mp[t[i]]--;
        }
    return ans;
    }
};