class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        //Applying bit manipulation
        
        int XOR=0;
        for(int i=0; i<nums.size(); i++)
        {
            XOR = XOR xor nums[i];
        }
    return XOR;
    }
};