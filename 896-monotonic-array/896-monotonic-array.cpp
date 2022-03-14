class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
        int n=nums.size();
        
        multimap<int,int>mp;
        for(auto it:nums)      mp.emplace(it,1);
        
        int f=0;
        int p=0;
        int i=0;
        for(auto it:mp)
        {
            if(it.first != nums[i])
            {
                f=1; 
                break;
            }
            i++;
        }
        i=n-1;
        for(auto it:mp)
        {
            if(it.first != nums[i])
            {
                p=1; 
                break;
            }
            i--;
        }
    if(p==0 || f==0)       return true;
    return false;
    }
};