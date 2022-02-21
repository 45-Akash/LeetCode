class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        vector<int>ans;
        multimap<int,int>mp;  //(diff,num)
        
        for(auto it:arr)
        {
            int diff=abs(it-x);
            mp.emplace(diff,it);
        }
        // for(auto it:mp)      cout<<it.first<<" "<<it.second<<endl;
        for(auto it:mp)
        {
            ans.push_back(it.second);
            k--;
            if(k==0) break;
        }
        sort(ans.begin(), ans.end());
    return ans;
    }
};