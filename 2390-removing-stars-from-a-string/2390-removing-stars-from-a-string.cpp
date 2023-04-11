class Solution {
public:
    string removeStars(string s)
    {
        stack<char>st;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='*' && st.size()>0) st.pop();
            else                         st.push(s[i]);
        }    
        string ans;
        while(st.size()!=0)
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
    return ans;
    }
};