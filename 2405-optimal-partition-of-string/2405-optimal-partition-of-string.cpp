class Solution {
public:
    int partitionString(string s)
    {
        int count = 1;
        int n = s.length();
        
        for(int i=0; i<n; )
        {
            unordered_map<char, int>mp;
            while(i<n)
            {
                if(mp[s[i]]!=0) 
                {
                    count++;
                    break;
                }
                else
                {
                    mp[s[i]] = 1;
                    i++;
                }
            }
        }
    return count;
    }
};