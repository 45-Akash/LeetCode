class Solution {
public:
    static bool sortBytwo(vector<int>&v1, vector<int>&v2)
    {
        if(v1[0]==v2[0])
        {
            return v1[1]<v2[1];
        }
        return v1[0]<v2[0];
    }
    vector<int> sortByBits(vector<int>& arr)
    {
        vector<vector<int>>ds;
        vector<int>vec;
        
        for(int i=0; i<arr.size(); i++)
        {
            bitset<32>bt;
            bt=arr[i];
            int cnt=bt.count();
            vector<int>v;
            v.push_back(cnt);
            v.push_back(arr[i]);
            ds.push_back(v);
        }
        sort(ds.begin(), ds.end(), sortBytwo);
        for(auto it:ds)         vec.push_back(it[1]);
    return vec;
    }
};