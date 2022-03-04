class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary)
    {
        int max_len=INT_MIN;
        string ans;
        int sn = s.length();
        int n = dictionary.size();
        
        for(int i=0; i<n; i++)
        {
            string str = dictionary[i];
            int strlen = str.length();
            int ind=0;
            for(int j=0; j<sn; j++)
            {
                if(ind<strlen && str[ind]==s[j])  ind++;
            }
            if(ind==strlen)
            {
                if(strlen>max_len)
                {
                    max_len = strlen;
                    ans = str;
                }
                else if(strlen==max_len)
                {
                    if(ans>str)     ans=str;    
                }
            }
        }
    return ans;
    }
};