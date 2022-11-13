class Solution {
public:
    string reverseWords(string s)
    {
        stack<string>st;
        string str="";
        
        int i=0;
        while(s[i] == 32)            //For skipping all leading spaces
        {
            i++;
        }
        
        for(int j=i; j<s.size(); j++)
        {
            if((s[j] == 32 && str.size()>0)) //If space encountered and substring is                                                not NULL then push it onto the stack
            {
                st.push(str);
                str="";                   //make it substring empty
            }
            
            if(s[j] != 32)
            {
                str = str + s[j];    //Add element to substring if it is not a space
            }
            
        }
        
       
       int foronces=0;          //check weather the last element of string is space
       if(str.size()==0)
       {
           foronces=1;
       }
        
        while( !st.empty())                 //for reverse building of string 
        {
            if(foronces == 0)
            {    
                str += " ";
            }
    
            str = str + st.top();
            foronces=0;
            st.pop();
        }
      return str;  
        
    }
};