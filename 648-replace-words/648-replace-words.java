class Solution {
    public String replaceWords(List<String> dictionary, String sentence)
    {
        String[] str = sentence.split(" ");
        Set<String>st = new HashSet<>();
        List<Integer>lst = new ArrayList<>();
        
        for(int i=0; i<dictionary.size(); i++)    
        {
            int l = dictionary.get(i).length();
            if(!lst.contains(l))      lst.add(l);
            st.add(dictionary.get(i));
        }
        Collections.sort(lst);
        
        String s="";
        for(int i=0; i<str.length; i++)
        {
            String word ="";
            for(Integer it:lst)
            {
                String sub="";
                if(it<=str[i].length())  sub = str[i].substring(0,it);
                if(st.contains(sub))
                {
                    word = sub;
                    break;
                }
            }
                
            if(word=="")         s += str[i];
            else                 s += word;
            s+=" ";
        }
        
    return s.trim();
            
    }
}