class Solution {
    public int[] twoSum(int[] nums, int target)
    {
        HashMap<Integer, Integer>Hmp = new HashMap<>();
        int[] ar = new int[2];
        
        for(int i=0; i<nums.length; i++)
        {
            int key = target-nums[i];
            
            if(Hmp.containsKey(key))
            {
                ar[0] = Hmp.get(key);
                ar[1] = i;
                return ar;
            }
            
            Hmp.put(nums[i], i);
        }
    return ar;
    }
}