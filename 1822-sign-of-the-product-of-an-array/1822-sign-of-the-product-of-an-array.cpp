class Solution {
public:
    int arraySign(vector<int>& nums)
    {
        long p = 0;
        for(auto it:nums)     
        {
            if(it==0)         return 0;
            if(it<0)           p++;
        }
        if(p%2==0)            return 1;
        return -1;
    }
};