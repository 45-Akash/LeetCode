class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c)
    {
        int num,deno;
        num=(c[1][1]-c[0][1]);
        deno=(c[1][0]-c[0][0]);
        
        
        for(int i=2; i<c.size(); i++)
        {
            int xd = c[i][0] - c[0][0];
            int yd = c[i][1] - c[0][1];
            
            if(xd*num != yd*deno)        return false;
        }
    return true;
    }
};