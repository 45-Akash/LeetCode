class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts)
    {
        int mod = (1000000007);
        auto max_horizontal_area=INT_MIN;
        auto max_vertical_area=INT_MIN;
        int diff;
        
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        max_horizontal_area = horizontalCuts[0]-0;
        for(int i=1; i<horizontalCuts.size(); i++)
        {
            diff = horizontalCuts[i]-horizontalCuts[i-1];
            if(diff > max_horizontal_area)
            {
                max_horizontal_area = diff;
            }
        }
        
        diff = h-horizontalCuts[horizontalCuts.size()-1];
        if(diff > max_horizontal_area)
        {
            max_horizontal_area = diff;
        }
        
        
        max_vertical_area = verticalCuts[0]-0;
        for(int i=1; i<verticalCuts.size(); i++)
        {
            diff = verticalCuts[i]-verticalCuts[i-1];
            if(diff > max_vertical_area)
            {
                max_vertical_area = diff;
            }
        }
        
        diff = w-verticalCuts[verticalCuts.size()-1];
        if(diff > max_vertical_area)
        {
            max_vertical_area = diff;
        }
      
        return (long)max_horizontal_area * max_vertical_area %mod;
   
    }
};