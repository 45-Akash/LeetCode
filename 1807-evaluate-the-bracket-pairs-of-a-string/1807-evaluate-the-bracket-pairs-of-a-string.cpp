class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge)
    {
        unordered_map<string,string>mp;
        
        int n=knowledge.size();
        
        for(int i=0; i<n; i++)
        {
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        
        string ans;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='(')
            {
                i++;
                string str;
                while(s[i]!=')')
                {
                    str += s[i];
                    i++;
                }
                
                if(mp[str]=="")
                {
                    ans += "?";
                }
                else ans += mp[str];
            }
            else
            {
                ans += s[i];
            }
        }
    return ans;
    }
};