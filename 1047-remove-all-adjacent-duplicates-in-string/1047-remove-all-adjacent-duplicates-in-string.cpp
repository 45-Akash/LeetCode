class Solution {
public:
    string removeDuplicates(string s)
    {
        string res;
        int n = s.length();
        
        stack<char>st;
        st.push(s[0]);
        
        for(int i=1; i<n; )
        {
            if(st.size()==0)
            {
                st.push(s[i]);
                i++;
                // cout<<s[i]<<" ";
            }
            else
            {
                char lastChar = st.top();
                int f=0;
                if(i<n && s[i]==lastChar)
                {
                    i++;
                    f=1;
                }
                if(f==1)   st.pop();
                else
                {
                    st.push(s[i++]);
                    // cout<<s[i]<<" ";
                }
            }
        }
        
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        
        reverse(res.begin(), res.end());
    return res;
    }
};