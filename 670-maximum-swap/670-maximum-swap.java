class Solution {
    public int maximumSwap(int num)
    {
        String Val = String.valueOf(num);
        
        char[] arr = Val.toCharArray();
        char[] arr2 = Val.toCharArray();
        Arrays.sort(arr);
        int j = arr.length-1;
        
        int firstIndex=0;
        for(int i=0; i<arr2.length; i++)
        {
            if(arr2[i]!=arr[j])
            {
                firstIndex=i;
                break;
            }
            else j--;
        }
        
        int secondIndex=0;
        int f=0;
        int maxVal = Character.getNumericValue(arr2[firstIndex]);;
        for(int i=firstIndex+1; i<arr2.length; i++)
        {
            int val = Character.getNumericValue(arr2[i]);
            if(maxVal <= val)
            {
                f=1;
                maxVal = val;
                secondIndex=i;
            }
        }
        
        if(f==0)      return num;
        
        char temp=arr2[firstIndex];
        arr2[firstIndex] = arr2[secondIndex];
        arr2[secondIndex] = temp;
        
        int ans=0;
        for(int i=0; i<arr2.length; i++)
        {
            int val = Character.getNumericValue(arr2[i]);
            ans = ans*10 + val;
        }
        
    return ans;
    }
}