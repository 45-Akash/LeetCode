class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums)
    {
        int n = nums.size();
        long long ans = 0;
        int subLen = 0;
        
        for(int i=0; i<n; )
        {
            if(nums[i]==0)
            {
                while(i<n && nums[i]==0)
                {
                    subLen++;
                    i++;
                }
            }
            else
            {
                ans += subLen*1ll*(subLen+1)/2;
                i++;
                subLen=0;
            }
        }
        if(subLen!=0)  
        {
            // cout<<"hi"<<endl;
            ans += subLen*1ll*(subLen+1)/2;
        }
    return ans;
    }
};