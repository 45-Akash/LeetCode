class Solution {
public:
    
   
    void solve(int ind, int size, vector<int>&can, int T, vector<int>&vec, vector<vector<int>>&ans)
    {
        
        if(T==0)
        {
            ans.push_back(vec);
            return;
        }
        if(ind==size)     return;
        
        
        for(int i=ind; i<size; i++)
        {
            if(can[i] > T) break;
            if(i > ind && can[i] == can[i-1])      continue;
            
            vec.push_back(can[i]);
            solve(i+1, size, can, T-can[i], vec, ans);
            vec.pop_back();   
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        vector<vector<int>>res;
        vector<int>vec;
        
        sort(candidates.begin(), candidates.end());
        int size = candidates.size();
       
        solve(0, size, candidates, target, vec, res);
        return res;
    }
};