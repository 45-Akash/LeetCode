class Solution {
public:
    void helper(vector<vector<int>>&ans, int k, int n, vector<int>&v, int num)
    {
        if(num<=10)
        {
            if(v.size()==k)
            {
                int sum=0;
                for(auto it:v)     sum+=it;
                if(sum==n)
                {
                    ans.push_back(v);
                    return;
                }
                else return;
            }
            else if(v.size()>k) return;
        }
        else    return;
        
        v.push_back(num);
        helper(ans,k,n,v,num+1);
        
        v.pop_back();
        helper(ans,k,n,v,num+1);
        

    }
    
    vector<vector<int>> combinationSum3(int k, int n)
    {
        
        vector<vector<int>>ans;
        vector<int>v;
        
        helper(ans,k,n,v,1);
    return ans;
    }
};