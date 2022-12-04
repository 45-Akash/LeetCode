class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) 
    {
        int n = nums.size();
        // long long Tsum = accumulate(nums.begin(), nums.end(),0);
        // cout<<Tsum<<endl;
        
        int min_diff=INT_MAX;
        int ans_index;
        vector<long long int>pr(n);
        vector<long long int>sf(n);
        
        sf[n-1] = nums[n-1];
        pr[0] = nums[0];
        
        for(int i=1; i<n; i++)
        {
            pr[i] = (pr[i-1] + nums[i]);
        }
        for(int i=n-2; i>=0; i--)
        {
            sf[i] = sf[i+1] + nums[i];
        }
        
        for(int i=1; i<=n; i++)
        {
            long long int d;
            
            if(i==n)
            {
                d=pr[i-1]/i;
            }
            else
            {
                long long int avg1 = pr[i-1]/(i);
                long long int avg2 = (sf[i])/(n-i);

                d = abs(avg1-avg2);
            }
            if(d<min_diff)
            {
                min_diff = d;
                ans_index = i-1;
            }
        }
    return ans_index;
    }
};