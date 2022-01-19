class Solution {
    public int longestPalindrome(String s)
    {
        Map<Character,Integer>mp = new HashMap<>();
        int len=0;
        boolean single=false;
        
        for(int i=0; i<s.length(); i++)
        {
            Character ch = s.charAt(i);
            mp.put(ch, mp.getOrDefault(ch,0)+1);
        }
        
        for(Map.Entry<Character,Integer>it : mp.entrySet())
        {
            int val=it.getValue();
            if(val%2==1)     single=true;
            len += val-val%2;
        }
        
        if(single)   len++;
    return len;
    }
}