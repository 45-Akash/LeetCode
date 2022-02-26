class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points)
    {
        sort(points.begin(), points.end());
        
        int baloons = 1;
        int i;
        int s=points[0][0];
        int e=points[0][1];
        
        for(i=1; i<points.size(); i++)
        {
            if(points[i][0] <= e)
            {
                s=max(s, points[i][0]);
                e=min(e, points[i][1]);
            }
            else
            {
                baloons++;
                s = points[i][0];
                e = points[i][1];
            }
        }
        
    return baloons;
    }
};