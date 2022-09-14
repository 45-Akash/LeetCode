class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums)
    {
        vector<int>odd;
        vector<int>even;
        vector<int>ans;
        
        for(auto it: nums)
        {
            if(it%2==1)
            {
                odd.push_back(it);
            }
            else
            {
                even.push_back(it);
            }
        }
        
        for(int i=0; i<nums.size()/2; i++)
        {
            
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
    return ans;
    }
};