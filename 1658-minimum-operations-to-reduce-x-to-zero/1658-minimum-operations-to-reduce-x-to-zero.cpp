class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {
        long long int sum = accumulate(nums.begin(), nums.end(), 0);
        
        int target = sum-x;
        if(target<0)       return -1;
        int ans=INT_MAX;
        int n=nums.size();
        
        // for(int i=1; i<n; i++)    nums[i]+=num[i-1];
        
        int start=0, end=0;
        int add=0;
        while(end<n)
        {
            if(add==target)
            {
                int size = end-start;
                int diff = n-size;
                if(diff<ans)
                {
                    ans = diff;
                }
                add-=nums[start];
                start++;
            }
            if(add<target)
            {
                add+=nums[end++];
            }
            else
            {
                add-=nums[start];
                start++;
            }
            
            // if(add==target)
            // {
            //     int size = end-start;
            //     int diff = n-size;
            //     if(diff<ans)
            //     {
            //         ans = diff;
            //     }
            //     add-=nums[start];
            //     start++;
            // }
        }
        
        while(start<n)
        {
            
            if(add==target)
            {
                int size = end-start;
                int diff = n-size;
                if(diff<ans)
                {
                    ans = diff;
                }
                add-=nums[start];
                start++;
            }
            else if(add>target)
            {
                add-=nums[start];
                start++;
            }
            else
            {
                break;
            }
        }
        
        if(ans==INT_MAX)    return -1;
    return ans;
    
    }
};