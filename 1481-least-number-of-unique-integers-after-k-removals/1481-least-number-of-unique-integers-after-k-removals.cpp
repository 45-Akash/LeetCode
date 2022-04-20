class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        vector<vector<int>>ds;
        int n = arr.size();
        
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto it:mp)
        {
            vector<int>l;
            l.push_back(it.second);
            l.push_back(it.first);
            ds.push_back(l);
        }
        
        sort(ds.begin(), ds.end());
        n=ds.size();
        // for(auto it:ds)               cout<<it[0]<<" "<<it[1]<<endl;
        int i=0;
        while(i<n && k>0)
        {
            k-=ds[i][0];
            i++;
        }
        // cout<<k<<" "<<i<<endl;
        if(k<0)         return n-i+1;
        else            return n-i;
    }
};