class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) 
    {
        int subcount=0;
        
        int n = nums.size();
        if(n<3)                 return 0;
        
        int size=0;
        int diff = nums[0]-nums[1];
        size=2;
        for(int i=2; i<n; i++)
        {
            while(i<n && nums[i-1]-nums[i]==diff)
            {
                size++;
                i++;
            }
            
            for(int j=3; j<=size; j++)         subcount += size-j+1;
            if(i<n) diff = nums[i-1]-nums[i];
            else    break;
            size=2;
        }
    return subcount;
    }
};