class Solution {
    public boolean carPooling(int[][] trips, int capacity)
    {
        int[] timestamp = new int[1001];
        for(int t[] : trips)
        {
            timestamp[t[1]] += t[0];     //passenger chadale at station t[1]
            timestamp[t[2]] -= t[0];     //passenger utarale at station t[2]
        }
        
        for(int it : timestamp)
        {
            capacity -= it;   //at any station passenger are more than bus capacity
            if(capacity < 0)   return false;
        }
        return true;   
    }
}