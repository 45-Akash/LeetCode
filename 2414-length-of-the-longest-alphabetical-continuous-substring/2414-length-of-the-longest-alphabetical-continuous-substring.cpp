class Solution {
public:
    int longestContinuousSubstring(string s)
    {
        int longestLen = 1;
        int curr_len = 1;
        int n = s.length();
        
        for(int i=1; i<n; i++)
        {
            if(s[i]-s[i-1]==1)
            {
                curr_len++;
                longestLen = max(longestLen, curr_len);
            }
            else
            {
                curr_len = 1;
            }
        }
    return longestLen;
    }
};