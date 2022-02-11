class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int>st;
        int num1,num2,op;
        
        for(int i=0; i<tokens.size(); i++)
        {
            if(tokens[i]=="+")
            {
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                op = num2 + num1;
                st.push(op);
            }
            else if(tokens[i]=="*")
            {
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                op = num2 * num1;
                st.push(op);
            }
            else if(tokens[i]=="-")
            {
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                op = num2 - num1;
                st.push(op);
            }
            else if(tokens[i]=="/")
            {
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
                op = num2 / num1;
                st.push(op);
            }
            else
            {
                int val = stoi(tokens[i]);
                st.push(val);
            }
        }
        return st.top();
    }
};