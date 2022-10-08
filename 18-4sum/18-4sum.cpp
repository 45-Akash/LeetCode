class Solution {
public:
    int mod = 1e9+7;
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>>ans;
        set<vector<int>>st;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long sum=0;
        
        for(int i=0; i<n-3; i++)
        {
            for(int j=i+1; j<n-2; j++)
            {
                int r = j+1;
                int l = n-1;
                int curr_sum = nums[i]+nums[j];
                if(nums[r]>0 && curr_sum>target) break;
                
                long req_sum = (long)target-curr_sum;
                // cout<<req_sum<<endl;
                while(r<l)
                {
                    // cout<<r<<" "<<l<<endl;
                    sum = nums[r]+nums[l];
                    // cout<<sum<<" "<<req_sum<<" r="<<r<<" l="<<l<<endl;
                    if(sum==req_sum)
                    {
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[r]);
                        v.push_back(nums[l]);
                        
                        if(st.find(v)==st.end())
                        {
                            ans.push_back(v);
                            st.insert(v);
                        }
                    }
                    if(sum>req_sum)
                    {
                        l--;
                    }
                    else
                    {
                        r++;
                    }
                }
            }
        }
    return ans;
    }
};