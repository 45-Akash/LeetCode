class Solution {
    public int majorityElement(int[] nums)
    {
        Map<Integer,Integer>hmp = new HashMap<>();
        int size = nums.length;
        
        for(int i=0; i<size; i++)
        {
            int val=0;
            if(hmp.containsKey(nums[i]))    val=hmp.get(nums[i]);
            val+=1;
            hmp.put(nums[i],val);
        }
        
        int ans=0;
        for(Map.Entry<Integer,Integer>it : hmp.entrySet())
        {
            if(it.getValue() > size/2)
            {
                ans = it.getKey();
                break;
            }
        }
    return ans;
    }
}