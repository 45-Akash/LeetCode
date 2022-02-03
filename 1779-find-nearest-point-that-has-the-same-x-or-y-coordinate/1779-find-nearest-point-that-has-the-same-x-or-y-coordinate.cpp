class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points)
    {
        int min_dist = INT_MAX;
        int ans_ind=0;
        int flag=0;
        
        for(int i=0; i<points.size(); i++)
        {
            int X = points[i][0];
            int Y = points[i][1];
            if(X==x || Y==y)
            {
                flag=1;
                int dist;
                if(X==x)     dist = abs(y-Y);
                if(Y==y)     dist = abs(x-X);
                
                if(dist < min_dist)
                {
                    min_dist = dist;
                    ans_ind=i;
                }
            }
        }
        if(flag==0)     return -1;
    return ans_ind;
    }
};