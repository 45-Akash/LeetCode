class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles)
    {
        long long ans=0;
        unordered_map<double,int>mp;
        set<double>st;
        for(int i=rectangles.size()-1; i>=0; i--)
        {
            double fraction = rectangles[i][0]/(rectangles[i][1]*1.0);
            if(st.find(fraction)!=st.end())     
            {
                mp[fraction]++;
                ans += mp[fraction];
            }
            else                                st.insert(fraction);  
        }
        
    return ans;
    }
};