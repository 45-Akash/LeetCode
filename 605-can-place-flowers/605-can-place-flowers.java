class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) 
    {
        if(n==0)  return true;
        int i;
        int size = flowerbed.length;
        if(size==1)
        {
            if(n>1)  return false;
            if(n==1 && flowerbed[0]==0) return true;
            return false;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0)    
        {
            flowerbed[0]=1;
            n--;
        }
        for(i=1; i<size-1; i++)
        {
            if(n==0)  break;
            if(flowerbed[i]==0)
            {
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0)
                {
                    flowerbed[i]=1;
                    n--;
                }
            }      
        }
        if(n==0)  return true;
        if(flowerbed[size-1]==0 && flowerbed[size-2]==0)    
        {
            
            flowerbed[size-1]=1;
            n--;
        }
        if(n==0)   return true;
        return false;
    }
}