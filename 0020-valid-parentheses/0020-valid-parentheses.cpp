class Solution {
public:
    int pref(char c)
        {
            if(c == '(' || c==')') {return 1;}
            else if(c == '[' || c==']') {return 2;}
            return 3;
            
        }
    bool isValid(string s)
    {
       int len = s.size();
       stack<char>st;
       for(int i=0; i<len; i++)
       {
           if(s[i]=='(' || s[i]=='[' || s[i]=='{')
           {
                st.push(s[i]);
           }
           
           
            if(s[i]==')' || s[i]==']' || s[i]=='}')
            {
                if(st.size()==0)
                {
                    return false;
                }
                if(pref(s[i]) == pref(st.top()))
                {
                    
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
       }
        

        if(st.size()==0)
        {
            return true;
        }
        return false;
    }
};