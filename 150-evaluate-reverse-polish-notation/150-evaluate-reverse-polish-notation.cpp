class Solution {
public:
    void operation(stack<int>&st, string s)
    {
        int n1 = st.top();
        st.pop();
        int n2 = st.top();
        st.pop();
        if(s=="add")     st.push(n2+n1);
        if(s=="sub")     st.push(n2-n1);
        if(s=="mul")     st.push(n2*n1);
        if(s=="div")     st.push(n2/n1);
        
    }
    
    int evalRPN(vector<string>& tokens)
    {
        stack<int>st;
        int num1,num2,op;
        
        for(int i=0; i<tokens.size(); i++)
        {
            if(tokens[i]=="+")          operation(st,"add");
            else if(tokens[i]=="*")     operation(st,"mul");
            else if(tokens[i]=="-")     operation(st,"sub");
            else if(tokens[i]=="/")     operation(st,"div");
            else
            {
                int val = stoi(tokens[i]);
                st.push(val);
            }
        }
        return st.top();
    }
};