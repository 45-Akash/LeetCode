class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.size()==0)   return 0;
        
        int longest = INT_MIN;
        int len;
        string ans;
        for(int i=0; i<s.size(); i++)
        {
            unordered_map<char,int>mp;
            len = 0;
            string sub="";
            for(int j=i; j<s.size(); j++)
            {
                sub += s[j];
                if(mp[s[j]]==0)
                {
                    mp[s[j]]++;
                    len++;
                    if(len > longest)     
                    {
                        longest = len;
                        ans = sub;
                    }
                }
                else       break;   
            }
        }
        cout<<ans<<endl;               //for printing the resultant string
    return longest;
    }
};