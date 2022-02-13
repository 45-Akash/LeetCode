class Solution {
public:
    
    void subset(int size, vector<int>&nums, int ind, vector<int>&ds, vector<vector<int>>&Dvec)
    {
        if(size == ind)
        {
            Dvec.push_back(ds);
            return;
        }
        
        //pick element
        ds.push_back(nums[ind]);
        subset(size, nums, ind+1, ds, Dvec);
        
        //not pick element
        ds.pop_back();
        subset(size, nums, ind+1, ds, Dvec);
    }
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>>Dvec ;
        vector<int>ds;
        
        int size = nums.size();
        subset(size, nums, 0, ds, Dvec);
        
        return Dvec;
    }
};