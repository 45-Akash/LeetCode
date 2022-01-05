class Solution {
    public int firstUniqChar(String s)
    {
        Map<Character, Integer>hmp = new LinkedHashMap<>();
        
        for(int i=0; i<s.length(); i++)
        {
            if(hmp.containsKey(s.charAt(i)))
            {
                char ch = s.charAt(i);
                int val = hmp.get(ch)+1;
                hmp.put(ch, val);
            }
            else
            {
                hmp.put(s.charAt(i), 1);
            }
        }
        
//         for(Map.Entry<Character,Integer>it : hmp.entrySet())
//         {
//             System.out.println(it.getValue()+" "+it.getKey());
//         }
        
         char TargetChar='@';
         int flag=0;
        for(Map.Entry<Character,Integer>it : hmp.entrySet())
        {
            if(it.getValue() == 1)
            {
                flag=1;
                TargetChar = it.getKey();
                break;
            }
        }
        if(flag==0)    return -1;
        int ans= s.indexOf(TargetChar);
   
    return ans;
    }
}