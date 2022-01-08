class Solution {
    

    private int pref(Character c)
    {
        if(c == '(' || c== ')')   return 1;
        else if(c == '[' || c == ']')  return 2;
        else                           return 3;
        
    }
    public boolean isValid(String s)
    {
        int size = s.length();
        Stack<Character>st = new Stack<>();
        
        for(int i=0; i<size; i++)
        {
            Character ch = s.charAt(i);
            
            if(ch=='(' || ch=='{' || ch=='[')
            {
                st.push(ch);
            }
            
            if(ch==')' || ch=='}' || ch==']')
            {
                if(st.size()==0)     return false;
                
                if(pref(ch) == pref(st.peek()))   st.pop();
                else                              return false;
            }
        }
        
        if(st.size()==0)      return true;
        return false;
        
    }
}