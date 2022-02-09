class Solution {
public:
    int findPairs(vector<int>& nums, int k)
    {
        set<vector<int>>st;
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                int df = abs(nums[i]-nums[j]);
                if(df==k)
                {
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    sort(v.begin(),v.end());
                    st.insert(v);
                }
            }
        }
        for(auto it:st)
        {
            cout<<it[0]<<" "<<it[1]<<endl;
        }
        return st.size();
    }
};