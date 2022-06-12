class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
        if(k==0 || k==1)    return 0;
        int n = nums.size();
        int cnt=0;
        
        int s=0;
        int e=0;
        long long mul=nums[0];
        e++;
        
        while(e<n)
        {
            // cout<<"hi"<<endl;
            if(mul<k)
            {
                cnt+=(e-s);
                mul*=nums[e++]; 
            }
            else
            {
                mul/=nums[s++];
            }
        }
        
        
        while(s<n)
        {
            if(mul<k)   cnt++;
            mul/=nums[s++];
        }
    return cnt;
    }
};