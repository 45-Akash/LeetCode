class Solution {
public:
    vector<int> findAnagrams(string s, string p)
    {
        if(p.size()>s.size())
        {
            return {};
        }
        
        vector<int>res;
        vector<int>shash(26,0),phash(26,0);
        int left=0;
        int right=0;
        for(int i=0;i<p.size();i++)
        {
            phash[p[i]-'a']++;
            shash[s[i]-'a']++;
            right++;
        }
        
        if(shash==phash)
        {   
            res.push_back(0);
        }
        
        while(right<s.size())
        {
            shash[s[left]-'a']--;
            shash[s[right]-'a']++;
            left++;
            right++;
            if(shash==phash)
            {
                res.push_back(left); // push the new left
            }
        }
        return res;
    }
};