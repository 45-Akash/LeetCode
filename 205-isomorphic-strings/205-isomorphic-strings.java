class Solution {
    public boolean isIsomorphic(String s, String t)
    {
       char sWord = s.charAt(0);
       char tWord = t.charAt(0);
        
        int n = s.length();
        
        int[] parentOfS = new int[n];
        Map<Character,Integer>Smp = new HashMap<>();
        for(int i=0; i<n; i++)
        {
            char ch = s.charAt(i);
            if(Smp.containsKey(ch))
            {
                parentOfS[i] = Smp.get(ch);
            }
            else
            {
                Smp.put(ch,i);
                parentOfS[i] = i;
            }
        }
        
        int[] parentOfT = new int[n];
        Map<Character,Integer>Tmp = new HashMap<>();
        for(int i=0; i<n; i++)
        {
            char ch = t.charAt(i);
            if(Tmp.containsKey(ch))
            {
                parentOfT[i] = Tmp.get(ch);
            }
            else
            {
                Tmp.put(ch,i);
                parentOfT[i] = i;
            }
        }
        
        for(int i=0; i<n; i++)
        {
            if(parentOfS[i] != parentOfT[i])      return false;
        }
    return true;   
    }
}