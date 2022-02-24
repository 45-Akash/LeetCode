class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int n=nums.size();
        vector<long long int>ds(n+1,0);
        cout<<n<<endl;
        
        for(int i=1; i<=n; i++)
        {
            ds[i] = ds[i-1] + nums[i-1];
        }
        
        int min_len=INT_MAX;
        for(int i=1; i<=n; i++)
        {
            int find = target + ds[i-1];
            auto Lower_bound = lower_bound(ds.begin(), ds.end(), find);
            if(Lower_bound != ds.end())
            {
                int s = Lower_bound-ds.begin();
                int ind = *ds.begin()+i-1;
                int len = s-ind;
                min_len = min(min_len, len);
            }
        }
        if(min_len==INT_MAX)  return 0;
    return min_len;
    }
};