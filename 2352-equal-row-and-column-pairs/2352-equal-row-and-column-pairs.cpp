class Solution {
public:
    int equalPairs(vector<vector<int>>& grid)
    {
        unordered_map<string, int>mp;
        
        int n=grid.size();
        int ans=0;
        for(int i=0; i<n; i++)
        {
            string s="";
            for(int j=0; j<n; j++)
            {
                s += to_string(grid[i][j]);
                s += ",";
            }
            // cout<<s<<" "<<endl;
            mp[s]++;
        }
        
        for(int i=0; i<n; i++)
        {
            string s="";
            for(int j=0; j<n; j++)
            {
                s += to_string(grid[j][i]);
                s += ",";
            }
            // cout<<s<<" "<<endl;
            ans += mp[s];
        }
    return ans;
    }
};