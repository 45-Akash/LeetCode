class Solution {
public:
    string arrangeWords(string text)
    {
        vector<string>str;
        multimap<int,string>mp;
        vector<string>ds;
        string ans="";
        
        string sub="";
        for(int i=0; i<text.length(); i++)
        {
            if(text[i]==' ')
            {
                str.push_back(sub);
                sub="";
            }
            else
            {
                sub += text[i];
            }
        }
        str.push_back(sub);
        
        
        
        for(int i=0; i<str.size(); i++)
        {
            int len = str[i].length();
            mp.emplace(len, str[i]);
        }
        
        for(auto it:mp)   
        {
            string s = it.second;
            if(ans=="")
            {
                if(islower(s[0]))
                {
                    s[0] = s[0] - 32;
                }
            }
            else if(ans != "")
            {
                if(isupper(s[0]))      s[0] = s[0]+32;
            }
            ans += s;
            ans +=" ";
        }
        
        
    return ans.substr(0, ans.length()-1);
    }
};