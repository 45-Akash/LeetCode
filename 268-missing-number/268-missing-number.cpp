class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        
        long long int TrueSum=0;
        long long int outputSum=0;
        
        for(int i=1;i<=nums.size(); i++)  TrueSum += i;
        
        for(int i=0; i<nums.size(); i++)   outputSum += nums[i];
        
        return TrueSum - outputSum;
    }
};