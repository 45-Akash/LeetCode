class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        if (s.size() == 0) return 0;
        
        int i=0; 
        int j=0; 
        int maxCharCount=0, result=0;
        unordered_map<char, int> freq;
        
        while(j!=s.size())
        {
            
            freq[s[j]]++;
            maxCharCount = max(maxCharCount, freq[s[j]]);
            
            while(j-i-maxCharCount+1 > k)
            {
                freq[s[i]]--;
                i++;
                for(auto m: freq)
                {
                   maxCharCount = max(maxCharCount, m.second);
                }
            }
            
            result = max(result, j-i+1);
            j++;
        }
        return result;
    }
};