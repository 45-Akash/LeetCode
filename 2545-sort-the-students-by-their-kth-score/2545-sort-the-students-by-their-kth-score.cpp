class Solution {
public:
    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k)
    {
        map<int, vector<int>>mp;
        int c_size = score[0].size();
        int n_size = score.size();
        vector<vector<int>>ans(n_size);
        for(auto it:score)
        {
            vector<int>l(it.size());
            int key;
            for(int i=0; i<it.size(); i++)
            {
                if(i==k)  key = it[i];
                else      l[i] = it[i];
            }
            mp[key] = l;
        }
        
       int ind = n_size-1;
       for(auto it:mp)
       {
           vector<int>l(c_size);
           l[k] = it.first;
           vector<int>ds = it.second;
           for(int i=0; i<ds.size(); i++)
           {
               if(i!=k) l[i] = ds[i];
           }
           ans[ind--] = l;
       }
    return ans;
    }
};