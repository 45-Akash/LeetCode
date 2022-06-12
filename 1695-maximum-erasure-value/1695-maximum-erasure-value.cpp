class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums)
    {
        int max_score = INT_MIN;
        int n = nums.size();
        cout<<n<<endl;
        
        int s=0, e=0;
        int sum=0;
        unordered_map<int,int>mp;
        
        int pass=0;
        while(e<n)
        {
            pass++;
            // cout<<nums[e]<<endl;
            if(mp[nums[e]]==0)
            {
                // cout<<"pass in if"<<endl;
                sum+=nums[e];
                mp[nums[e]]++;
                e++; 
            }
            else
            {
                // cout<<"pass in else"<<endl;
                max_score = max(sum,max_score);
                sum-=nums[s];
                mp.erase(nums[s]);
                s++;     
            }
        }
        
        max_score = max(sum,max_score);
        
        // while(s<n)
        // {
        //     if(mp[nums[s]]==0)
        //     {
        //         sum+=nums[s];
        //         max_score = max(sum,max_score);
        //         break;
        //     }
        //     s++;
        // }
        
    return max_score;
    }
};