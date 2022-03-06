class Solution {
public:
    
    void combinations(int num, int limit, vector<vector<int>>&res, vector<int>&ds)
    {
        if(num == 0)
        {
            if(ds.size()==limit)       
            {
                res.push_back(ds);
            }
           return;
        }
        
        ds.push_back(num);
        combinations(num-1, limit, res, ds);
        
        ds.pop_back();
        combinations(num-1, limit, res, ds);
        return;
    }
    
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>>res;
        vector<int>ds;
        
        combinations(n, k, res, ds);
        
        return res;
    }
};