class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes)
    {
        int n = groupSizes.size();
        int maxsize=INT_MIN;
        
        for(int i=0; i<n; i++)
        {
            if(groupSizes[i]>maxsize)      maxsize=groupSizes[i];
        }
        
        vector<vector<int>>ds(maxsize);
        
        for(int i=1; i<=maxsize; i++)
        {
            vector<int>l;
            ds.push_back(l);
        }
        
        for(int i=0; i<n; i++)
        {
            ds[groupSizes[i]].push_back(i);
        }
        
        vector<vector<int>>ans;
        for(int i=1; i<=maxsize; i++)
        {
            if(ds[i].size()>0)
            {
                int j=0;
                int size=ds[i].size();
                
                while(j<size)
                {
                    int pass=i;
                    vector<int>l;
                    while(pass--)
                    {
                        l.push_back(ds[i][j++]);
                    }
                    ans.push_back(l);
                }
            }
        }
    return ans;
    }
};