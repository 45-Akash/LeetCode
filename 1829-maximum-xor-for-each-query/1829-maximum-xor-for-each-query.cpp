class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit)
    {
        int maxXorVal = pow(2,maximumBit)-1;
        
        int Xor = 0;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
            Xor = Xor ^ nums[i];
        }
        
        int x = Xor^maxXorVal;
        ans.push_back(x);
        
        int e=nums.size()-1;
        
        while(e>0)
        {
            Xor = Xor ^ nums[e];
            x = Xor^maxXorVal;
            ans.push_back(x);
            e--;
        }
    return ans;
    }
};