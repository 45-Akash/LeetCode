class Solution {
    public int[] sortArrayByParity(int[] nums)
    {
        int len = nums.length;
        int[] ans = new int[len];
        
        int i=0;
        int k=0;
        while(i<len)
        {
            if(nums[i]%2 == 0)
            {
                ans[k++] = nums[i];
            }
            i++;
        }
        
        i=0;
        while(i<len)
        {
            if(nums[i]%2 == 1)
            {
                ans[k++] = nums[i];
            }
            i++;
        }
    return ans;
    }
}