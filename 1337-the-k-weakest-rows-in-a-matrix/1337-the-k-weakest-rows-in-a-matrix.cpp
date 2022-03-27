class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        map<int,int>mp;
        
        for(int i=0; i<mat.size(); i++)
        {
            mp[i]=0;
            for(int j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j]==1)      mp[i]++;
            }
        }
        
        
        vector<int>ans;
        while(k--)
        {
            int strenght=INT_MAX;
            int ele;
            for(auto it:mp)
            {
                if(it.second<strenght)
                {
                    strenght=it.second;
                    ele=it.first;
                }
            }
            ans.push_back(ele);
            mp.erase(ele);
        }
    return ans;
    }
};