class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) 
    {
        set<int>x_axis;
        set<int>y_axis;
        vector<int>Cx;
        vector<int>Cy;
        int common_x1,common_x2,common_y1,common_y2;
        common_x1=0;
        common_y1=0;
        common_x2=0;
        common_y2=0;
            
        for(int i=ax1; i<=ax2; i++)       x_axis.insert(i);
        for(int j=ay1; j<=ay2; j++)       y_axis.insert(j);
        
        for(int i=bx1; i<=bx2; i++)
        {
            if(x_axis.find(i)!=x_axis.end())      Cx.push_back(i);
        }
        
        for(int j=by1; j<=by2; j++)
        {
            if(y_axis.find(j)!=y_axis.end())      Cy.push_back(j);
        }
        int x1 = ax2-ax1;
        int x2 = bx2-bx1;
        
        int y1 = ay2-ay1;
        int y2 = by2-by1;
        
        long int area1 = x1*y1;
        long int area2 = x2*y2;
        
        if(Cx.size()!=0)
        {
            common_x1 = *Cx.begin();
            common_x2 = *Cx.rbegin();
        }
        
        if(Cy.size()!=0)
        {
            common_y1 = *Cy.begin();
            common_y2 = *Cy.rbegin();
        }
        
        int cx = common_x2-common_x1;
        int cy = common_y2-common_y1;
        
        long long int Carea = cx*cy;
        long int Final_area = area1+area2-Carea;
        
        return Final_area;
    }
};