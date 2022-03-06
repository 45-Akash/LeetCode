class Solution
{
    void LCpermutation(String ip, String op, int ind, int size, List<String>str)
    {
        if(ind == size)
        {
            str.add(op);
            return;
        }
        
        String op1 =op;
        String op2 =op;
        char ch = ip.charAt(ind);
        if(ch >=48 && ch <= 57)
        {
            op1 = op + ch;
            LCpermutation(ip, op1, ind+1, size, str);
            
        }
        else if(ch >= 97 && ch <= 122)
        {
            
            op1 = op1 + Character.toUpperCase(ch);
            LCpermutation(ip, op1, ind+1, size, str);
            
            op2 = op2 + ch;
            LCpermutation(ip, op2, ind+1, size, str);
        }
        else if(ch >= 65 && ch <= 90)
        {
            
            op1 = op1 + Character.toLowerCase(ch);
            LCpermutation(ip, op1, ind+1, size, str);
            
            op2 = op2 + ch;
            LCpermutation(ip, op2, ind+1, size, str);
        }
        
      return;
    }
    
    public List<String> letterCasePermutation(String s)
    {
        List<String> str = new ArrayList<>();
        String op="";
        int size = s.length();
        
        LCpermutation(s, op, 0, size, str);
        
    return str;
    }
}