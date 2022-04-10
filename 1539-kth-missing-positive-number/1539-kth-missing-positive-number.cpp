class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        vector<int>vec(10000,0);
        int ans;
        
        for(int i=0; i<arr.size(); i++)
        {
            vec.at(arr[i])=1;
        }
        // for(auto it:vec)      cout<<it<<" ";
        int i;
        for(i=1; i<vec.size(); i++)
        {
            if(vec[i]==0)
            {
                k--;
                if(k==0)
                {
                    return i;
                }
               
                
            }
        }
        return 0;
    }
};