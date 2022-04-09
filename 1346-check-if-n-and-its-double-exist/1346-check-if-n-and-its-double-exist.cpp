class Solution {
public:
    bool checkIfExist(vector<int>& arr)
    {
        set<int>st;
        for(int i=0; i<arr.size(); i++)
        {
            if(st.find(2*arr[i]) != st.end())
                return true;
            if(arr[i]%2==0)
                if(st.find(arr[i]/2) != st.end())
                    return true;
            st.insert(arr[i]);
        }
        return false;
    }
};