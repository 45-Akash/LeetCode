class NumArray {
public:
    vector<int>ds;
    NumArray(vector<int>& nums)
    {
        int len=nums.size();
        ds.resize(len);
        ds[0]=nums[0];
        
        for(int i=1; i<len; i++)        ds[i] = ds[i-1]+nums[i];
        for(auto it:ds)        cout<<it<<" ";
    }
    
    int sumRange(int left, int right)
    {
        int sum;
        if(left==0 || right==0)       return ds[right];
        return ds[right]-ds[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */