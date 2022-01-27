class Solution {
public:
    stack<char>st;
    string str="";
    int count=0;
    
    void push(char ch)
    {
       st.push(ch); 
    }
    bool pop()
    {
       if(st.size()==0)  return false;
       else
       {
           st.pop();
           return true;
       }
        
    }
    
    string minRemoveToMakeValid(string s)
    {
       string result;
       for(int i=0; i<s.size(); i++) 
       {
           if(s[i]=='(')
           {
               str+=s[i];
               push('(');
               
           }
           else if(s[i]==')')
           {
               if(pop())    str+=s[i];
           }
           else             str+=s[i];
           
       }
        
        int num = st.size();
        for(int i=str.size()-1; i>=0; i--)
        {
            if(str[i]=='(' && num>0)
            {
                num--;
                continue;
            }
            result += str[i];
        }
        reverse(result.begin(), result.end());
        
    return result;
    }
};