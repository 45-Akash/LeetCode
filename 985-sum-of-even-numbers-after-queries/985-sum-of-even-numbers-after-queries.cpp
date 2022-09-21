class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries)
    {
        vector<int>ans(nums.size(), 0);
        int sumEven = 0;
        for(auto &it:nums)
        {
            if(it%2==0)   sumEven += it;
        }
        
        int flag=1;
        // cout<<sumEven<<endl;
        for(int i=0; i<nums.size(); i++)
        {
            int targetIndex = queries[i][1];
            int numsVal = nums[targetIndex];
            int Qval = queries[i][0];
            nums[targetIndex] += Qval;
           
            if(abs(numsVal%2)==1 && abs(Qval%2)==1)
            {
                flag=0;
                sumEven = sumEven+numsVal+Qval;
              
            }
            else if(numsVal%2==0 && Qval%2==0)
            {
                flag=0;
                sumEven += Qval;
               
            }
            else if(sumEven!=0 || flag!=1)
            {
                
                if(abs(numsVal)%2==0)     sumEven -= numsVal;
              
            }
            // cout<<sumEven<<endl;
         ans[i] = sumEven;  
        }
    return ans;
    }
};