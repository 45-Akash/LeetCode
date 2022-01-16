class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int>ans;
        vector<vector<int>>ds;
        ans.push_back(1);
        ds.push_back(ans);
        
        
        for(int i=1; i<=rowIndex; i++)
        {
            int size = ds[i-1].size();
            vector<int>l(size+1);
            l[0]=l[size]=1;
            
            for(int j=1; j<size; j++)
            {
                l[j] = ds[i-1][j-1] + ds[i-1][j];
            }
            ds.push_back(l);
        }
    return ds[rowIndex];
    }
};