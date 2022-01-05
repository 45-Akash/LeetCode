class Solution {
    public boolean isAnagram(String s, String t)
    {
        if(s.length() != t.length()) return false;
        Map<Character, Integer>hmp = new HashMap<>();
        
        for(int i=0; i<s.length(); i++)
        {
            char ch = s.charAt(i);
            if(hmp.containsKey(ch))
            {
                int val = hmp.get(ch);
                hmp.put(ch, val+1);
            }
            else
            {
                hmp.put(ch,1);
            }
        }
        
        for(int i=0; i<t.length(); i++)
        {
            char ch = t.charAt(i);
            
            if(hmp.containsKey(ch)){
                int val = hmp.get(ch);
                if(val==0)               return false;
                hmp.put(ch, val-1);
            }
            else                         return false;
        }
    return true;
    }
}