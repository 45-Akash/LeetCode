class Solution {
public:
    
    bool validateStackSequences(vector<int>&pushed, vector<int>&popped)
    {
        stack<int>st;
        int j=0;
        for(int i=0; i<pushed.size(); i++)
        {
            int var=pushed[i];
            st.push(var);
            while(!st.empty() && st.top()==popped[j])
            {
                st.pop();
                j++;
            }
        }
        
        if(st.size()!=0)     return false;
        return true;
    }
};