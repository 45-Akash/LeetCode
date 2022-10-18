class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        vector<int>dummy = heights;
        sort(heights.begin(), heights.end());
        int count=0;
        
        for(int i=0; i<dummy.size(); i++)
        {
            if(dummy[i] != heights[i]) count++;
        }
    return count;
    }
};