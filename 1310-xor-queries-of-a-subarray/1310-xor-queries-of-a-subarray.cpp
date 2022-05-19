class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        int n=arr.size();
        vector<int>ds(n,0);
        vector<int>ans;
        
        ds[0]=arr[0];
        
        for(int i=1; i<n; i++)
        {
            ds[i] = ds[i-1]^arr[i];
        }
        
        for(auto &it:queries)
        {
            int l = it[0];
            int r = it[1];
            
            if(l==0)
            {
                ans.push_back(ds[r]);
            }
            else
            {
                int val = ds[r] ^ ds[l-1];
                ans.push_back(val);
            }
        }
    return ans;
    }
};