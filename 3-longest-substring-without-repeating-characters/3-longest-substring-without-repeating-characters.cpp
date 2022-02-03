class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.size()==0)   return 0;
        
        int longest = INT_MIN;
        int len;
        for(int i=0; i<s.size(); i++)
        {
            unordered_map<char,int>mp;
            string sub="";
            len = 0;
            for(int j=i; j<s.size(); j++)
            {
                sub += s[j];
                if(mp[s[j]]==0)
                {
                    mp[s[j]]++;
                    len++;
                    if(len > longest)     longest = len;
                }
                else       break;   
            }
        }
    return longest;
    }
};