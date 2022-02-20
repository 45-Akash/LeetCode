class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) 
    {
        int cnt=0;
        int n = intervals.size();
        for(int i=0; i<n; i++)
        {
            int a=intervals[i][0];
            int b=intervals[i][1];
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    int c=intervals[j][0];
                    int d=intervals[j][1];
                    if(c<=a && b<=d)
                    {
                        cnt++;
                        break;
                    }
                }
            }
        }
    return n-cnt;
    }
};