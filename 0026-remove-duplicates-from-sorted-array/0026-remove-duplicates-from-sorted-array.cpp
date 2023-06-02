class Solution {
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int>st;
        for(auto it:nums)
        {
            st.insert(it);
        }
        
        nums.clear();
        int l=st.size();
         
       for(auto it = st.begin(); it!=st.end(); it++)
        {
           int x = *it;
            nums.push_back(x);
        }
        
        return l;
       
    }
};