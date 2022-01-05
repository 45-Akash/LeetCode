class Solution {
    public boolean canConstruct(String ransomNote, String magazine)
    {
        Map<Character,Integer>hmp = new HashMap<>();
        
        for(int i=0; i<magazine.length(); i++)
        {
            char ch = magazine.charAt(i);
            if(hmp.containsKey(ch))
            {
                int val = hmp.get(ch);
                hmp.put(ch, val+1);
            }
            else
            {
                hmp.put(ch, 1);
            }
        }
        
        for(int i=0; i<ransomNote.length(); i++)
        {
            char ch = ransomNote.charAt(i);
            if(hmp.containsKey(ch))
            {
                int val = hmp.get(ch);
                hmp.put(ch, val-1);
                if(val==1)
                {
                    hmp.remove(ch);
                }
            }
            else
            {
                return false;
            }
            
        }
    return true;
    }
}