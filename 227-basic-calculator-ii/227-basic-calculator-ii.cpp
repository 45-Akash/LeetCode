class Solution {
public:
    int operation(int n1, int n2, char op)
    {
        if(op=='+')     return n1+n2;
        if(op=='-')     return n1-n2;
        if(op=='*')     return n1*n2;
        return n1/n2;
        
    }
    int calculate(string s)
    {
        int n=s.length();
        stack<string>st;
        string cp="";
        for(int i=0; i<n; i++)       if(s[i]!=' ') cp+=s[i];
        s=cp;
        n=s.length();
       
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='*'|| s[i]=='/')
            {
                int num1 = stoi(st.top());
                char op = s[i];
                i++;
                string s1="";
                while(i<n && isalnum(s[i])) 
                {
                    s1+=s[i];
                    i++;
                }
                i--;
                int num2 = stoi(s1);
                int val = operation(num1, num2, op);
                st.pop();
                st.push(to_string(val));
            }
            else if(s[i]!=' ')
            {
                if(s[i]=='-' || s[i]=='+')
                {
                    st.push(to_string(s[i]));
                }
                else
                {
                    string p="";
                    while(i<n && isalnum(s[i]))
                    {
                        p+=s[i];
                        i++;
                    }
                    i--;
                    st.push(p);
                }
            }
        }
        stack<string>ds;
        while(!st.empty())
        {
            ds.push(st.top());
            st.pop();
        }
        
        while(ds.size()!=1)
        {
            cout<<"hi"<<" ";
            //num1
            char ch;
            int num1=stoi(ds.top());
            ds.pop();
            //op
            string op = ds.top();
            if(op=="43") ch='+';
            else         ch='-';
            ds.pop();
            //num2
            int num2=stoi(ds.top());
            ds.pop();
            
            int val = operation(num1, num2, ch);
            cout<<num1<<ch<<num2<<"="<<val<<endl;
            ds.push(to_string(val));
        }
        
        sum = stoi(ds.top());
    return sum;
    }
};