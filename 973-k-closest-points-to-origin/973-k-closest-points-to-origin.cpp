class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
    {
        multimap<float,pair<int,int>>mp;
        vector<vector<int>>ans;
        pair<int,int>p;
        
        for(int i=0; i<points.size(); i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            
            float diff = sqrt(pow(x,2) + pow(y,2));
            p = make_pair(x,y);
            mp.emplace(diff, p);
        }
        
        for(auto &it : mp)
        {
            k--;
            vector<int>v;
            v.push_back(it.second.first);
            v.push_back(it.second.second);
            ans.push_back(v);
            if(k==0) break;
        }
    return ans;
    }
};