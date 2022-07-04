class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        string str1="";
        string str2="";
        
         for(int i=0; i<s.length(); i++)
         {
             if(s[i]=='#' && str1.length()!=0)
                 str1.pop_back();
             else if(s[i]!='#')
                 str1 += s[i];
         }
        
        for(int i=0; i<t.length(); i++)
        {
            if(t[i]=='#' && str2.length()!=0)
                str2.pop_back();
            else if(t[i]!='#')
                str2 += t[i];
        }
        
        // cout<<str1<<" "<<str2<<endl;
        
        return (str1==str2);
    }
};