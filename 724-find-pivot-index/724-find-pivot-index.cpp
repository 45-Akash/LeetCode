class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>post(n,0);
        
        for(int i=n-2; i>=0; i--)        post[i] = post[i+1]+nums[i+1];
        
        int ans=-1;
        int sum=0;
        
        for(int i=0; i<n; i++)
        {
            if(sum==post[i])
            {
                ans=i;
                break;
            }
            sum+=nums[i];
        }
    return ans;
    }
};