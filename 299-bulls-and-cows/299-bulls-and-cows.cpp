class Solution {
public:
    string getHint(string secret, string guess)
    {
        int n=secret.length();
        int b=0;
        int c=0;
        string ans="";
        multiset<char>s;
        multiset<char>g;
        
        for(auto it:secret)     s.insert(it);
        for(auto it:guess)      g.insert(it);
        
        for(int i=0; i<n; i++)
        {
            if(secret[i]==guess[i])
            {
                b++;
                s.erase(s.find(secret[i]));
                g.erase(g.find(secret[i]));
            }
        }
        
        for(auto it:g)
        {
            if(s.find(it)!=s.end())
            {
                c++;
                s.erase(s.find(it));
            }
        }
        ans += to_string(b);
        ans += "A";
        ans += to_string(c);
        ans += "B";
    return ans;
    }
};