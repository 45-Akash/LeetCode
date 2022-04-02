class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int s=0;
        int e=nums.size()-1;
        int pos;
        
        while(s<=e)
        {
            int m = s + (e-s)/2;
            
            {
                if(nums[m]==target)
                {
                    pos=m;
                    break;
                }
                else if(nums[m]>target)
                {
                    pos=m;
                    e=m-1;   
                }
                else
                {  
                    s=m+1; 
                    pos=s;
                }
            }
        }
        
    return pos;
    }
};