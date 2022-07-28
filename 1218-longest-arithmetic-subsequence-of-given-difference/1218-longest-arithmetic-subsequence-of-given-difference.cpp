class Solution {
public:
    
    int longestSubsequence(vector<int>& arr, int difference) 
    {
        int n = arr.size();
        unordered_map<int, int>mp;
        
        for(int i=0; i<n; i++)
        {
            int num = arr[i];
            int diff = num-difference;
            mp[num] = mp[diff] + 1;
        }
        
        int ans = 1;
        for(auto it:mp)
        {
            ans = max(ans, it.second);
        }
    return ans;
    }
};