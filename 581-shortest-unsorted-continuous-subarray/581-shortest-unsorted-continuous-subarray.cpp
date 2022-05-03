class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>vec(nums);
        
        sort(vec.begin(), vec.end());
        
        int sInd=-1;
        int eInd=-1;
        for(int i=0; i<n; i++)
        {
            if(nums[i]!=vec[i])
            {
                sInd=i;
                break;
            }
        }
        
        for(int i=n-1; i>=0; i--)
        {
            if(nums[i]!=vec[i])
            {
                eInd=i;
                break;
            }
        }
      
    if(sInd==-1 || eInd==-1)     return 0;
    return eInd-sInd+1;
    }
};