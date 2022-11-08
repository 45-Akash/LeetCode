class Solution {
public:
    string makeGood(string s)
    {
        stack<char>st;
        
        st.push(s[0]);
        for(int i=1; i<s.length(); i++)
        {
            if(st.size()==0) st.push(s[i]);
            
            else{
                char lastChar = st.top();
                char currentChar = s[i];

                if(abs(lastChar-currentChar)==32 && ((isupper(lastChar)&&islower(currentChar)) || (isupper(currentChar)&&islower(lastChar))))
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        
        string ans;
        while(st.size()>0)
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
    return ans;
    }
};