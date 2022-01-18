class Solution {
    public int subarraySum(int[] nums, int k)
    {
        int count=0;
        int curSum=0;
        int n=nums.length;
        Map<Integer,Integer>mp = new HashMap<>();
        
        if(n==0)      return 0;
        
        for(int i=0; i<n; i++)
        {
            curSum += nums[i];
            
            if(curSum==k)    count++;
            
            if(mp.containsKey(curSum-k))     count += mp.get(curSum-k);
            
            mp.put(curSum, mp.getOrDefault(curSum,0)+1);
        }
    return count;
    }
}