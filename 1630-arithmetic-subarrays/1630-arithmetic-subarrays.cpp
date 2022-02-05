class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r)     {
        vector<bool>res;
        for(int i=0; i<l.size(); i++)
        {
            int s = l[i];
            int e = r[i]+1;
            
            vector<int>ds(nums.begin()+s, nums.begin()+e);
            sort(ds.begin(), ds.end());
            set<int>st;
            
            for(int i=0; i<ds.size()-1; i++)
            {
                int diff = ds[i+1]-ds[i];
                st.insert(diff);
            }
            
            if(st.size()==1)      res.push_back(true);
            else                  res.push_back(false);
            
        }
    return res;
    }
};