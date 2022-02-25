class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        multiset<int>st;
        
        for(int i=0; i<nums.size(); i++)
        {
            int square = nums[i]*nums[i];
            st.insert(square);
        }
        
        vector<int>ans;
        for(auto it:st)
        {
            ans.push_back(it);
        }
    return ans;
    }
};