class Solution {
    public String addStrings(String num1, String num2)
    {
        int len_1 = num1.length();
        int len_2 = num2.length();
        StringBuffer n1 = new StringBuffer(num1);
        StringBuffer n2 = new StringBuffer(num2);
        n1.reverse();
        n2.reverse();
        String ans="";
        int sum = 0, k = 0, c = 0,p=0;
        
        int[] arr1 = new int[len_1];
        int[] arr2 = new int[len_2];
        
        for(int i=0; i<len_1; i++)
        {
            arr1[i] = Character.getNumericValue(n1.charAt(i));
        }
        
        for(int i=0; i<len_2; i++)
        {
            arr2[i] = Character.getNumericValue(n2.charAt(i));
        }
        
        while(p < len_1 || k < len_2 || c!=0)
        {
            sum=0;
            if(p < len_1)
            {
                sum += arr1[p++];
            }
            if(k < len_2)
            {
                sum += arr2[k++];
            }
            sum += c;
            
            c = sum/10;
            String ch = Integer.toString(sum%10);
            ans += ch; 
        }
    
    String result="";
    for(int i=ans.length()-1; i>=0; i--)
    {
        result += ans.charAt(i);
    }
    return result;
        
    }
}