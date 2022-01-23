class Solution {
    public List<Integer> findLonely(int[] nums)
    {
        Arrays.sort(nums);
        List<Integer>lst = new ArrayList<>();
        
        int n = nums.length;
        if(n==1)
        {
            lst.add(nums[0]);
            return lst;
        }
        if(nums[0] != nums[1] && nums[0]+1 != nums[1])            lst.add(nums[0]);
        if(nums[n-1] != nums[n-2] && nums[n-1] != nums[n-2]+1)   lst.add(nums[n-1]);
        
        for(int i=1; i<n-1; i++)
        {
            int ele = nums[i];
            if(ele != nums[i-1] && ele != nums[i+1])
            {
                if(ele+1 != nums[i+1] && ele-1 != nums[i-1])
                {
                    lst.add(nums[i]);
                }
            }
        }
    return lst;
    }
}