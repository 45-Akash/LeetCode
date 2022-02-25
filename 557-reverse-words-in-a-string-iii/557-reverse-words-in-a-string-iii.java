class Solution {
    public String reverseWords(String s)
    {
        String[] arr = s.split(" ");
        String ans=" ";
        
        for(int i=0; i<arr.length; i++)
        {
            String sub = arr[i];
            String rev="";
            for(int j=sub.length()-1; j>=0; j--)    rev+=sub.charAt(j);
            ans += rev;
            ans += " ";
        } 
    return ans.trim();
    }
}