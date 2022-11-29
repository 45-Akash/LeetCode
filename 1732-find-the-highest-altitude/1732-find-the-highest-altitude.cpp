class Solution {
public:
    int largestAltitude(vector<int>& gain)
    {
        int ans = 0;
        int lastVal = 0;
        for(int i=0; i<gain.size(); i++)
        {
            lastVal = lastVal + gain[i];
            ans = max(ans, lastVal);
        }
    return ans;
    }
};