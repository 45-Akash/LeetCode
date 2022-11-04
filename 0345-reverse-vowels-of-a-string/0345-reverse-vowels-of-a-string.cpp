class Solution {
public:
    string reverseVowels(string s)
    {
        string sub="";
        int n = s.length();
        
        for(int i=0; i<n; i++)
        {
            char c = s[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
   c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                sub+=c;
            }
        }
        // cout<<sub<<endl;
        reverse(sub.begin(), sub.end());
        int i=0;
        for(int j=0; j<n; j++)
        {
            char c = s[j];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
   c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                s[j] = sub[i++];
            }
        }
    return s;
    }
};