class Solution {
    public boolean validMountainArray(int[] arr)
    {
        if(arr.length <3) return false;
        int pivot=0;
        int i=0;
        
        for(i=0; i<arr.length-1; i++)
        {
            if(arr[i]==arr[i+1])      return false;
            if(arr[i]>arr[i+1])
            {
                pivot = i+1;
                break;
            }
        }
        
        if(pivot==1)  return false;
        for(int j=pivot; j<arr.length-1; j++)
        {
            if(arr[j]<=arr[j+1])   return false;
        }
    return true;
    }
}