class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>>ans;
        vector<int>v;
        v.push_back(1);
        ans.push_back(v);
        
        for(int i=1; i<numRows; i++)
        {
            int size = ans[i-1].size();
            vector<int>v1(size+1);
            v1[0]=v1[size]=1;
            
            for(int j=1; j<size; j++)
            {
                v1[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(v1);
        }
        return ans;
    }
};