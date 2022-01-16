class Solution {
public:
    
    static bool sort2(vector<int>&o1, vector<int>&o2)
    {
        // if(o1[0]==o2[0])
        // {
        //     return o1[1] < o2[1];
        // }
        
        return o1[0] < o2[0]; 
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        if(intervals.size()==1)   return 0;
        sort(intervals.begin(), intervals.end(), sort2);
        
        int cnt=0;
        int end = intervals[0][1];
        int start = intervals[1][0];
        
        for(int i=1; i<intervals.size(); i++)
        {
            start = intervals[i][0]; 
            if(end > start)           
            {
                end = min(end,intervals[i][1]);
                cnt++;
            }
            else
            {
                end = intervals[i][1];
            }
        }
        
    return cnt;
    }
};