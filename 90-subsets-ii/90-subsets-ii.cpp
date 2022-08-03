class Solution {
public:
    
    
    void uniqueSubset(int size, vector<int>&arr, int ind, vector<int>&ds, set<vector<int>>&st)
    {
        if(ind == size)
        {
            st.insert(ds);
            return;
        }
        
        ds.push_back(arr[ind]);
        uniqueSubset(size, arr, ind+1, ds, st);
        
        ds.pop_back();
        uniqueSubset(size, arr, ind+1, ds, st);
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        vector<int>ds;
        vector<vector<int>>res;
        set<vector<int>>st;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        uniqueSubset(n, nums, 0, ds, st);
       
        
        for(auto it : st)
        {
            res.push_back(it);
        }
        
    return res;
        
    }
};