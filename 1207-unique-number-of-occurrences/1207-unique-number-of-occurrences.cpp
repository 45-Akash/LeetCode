class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        sort(arr.begin(), arr.end());
        set<int>st;
        int start,end;
        int n = arr.size();
        
        for(int i=0; i<n; i++)
        {
            start = i;
            while(i+1 < n && arr[i]==arr[i+1])     i++;
            end = i;
            int diff = end-start;
            if(st.find(diff)!=st.end())    return false;
            else                           st.insert(diff);
        }
    return true;
    }
};