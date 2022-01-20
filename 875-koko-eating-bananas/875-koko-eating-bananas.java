class Solution {
    public int minEatingSpeed(int[] piles, int h)
    {
        int left = 1;
        int right = Integer.MIN_VALUE;
        
        for(int i=0; i<piles.length; i++)
        {
            if(piles[i] > right)     right = piles[i];
        }
        
        while(left < right)
        {
            int mid = left + (right-left)/2;
            
            int wHour = 0;
            for(int i=0; i<piles.length; i++)
            {
                wHour += piles[i]/mid;
                if(piles[i]%mid != 0)    wHour++;
            }
            
            if(wHour <= h)
            {
                right = mid;
            }
            else 
            {
                left = mid+1;
            }
        }
    return left;
    }
}