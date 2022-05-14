class Solution {
    void BalParanthesis(int open, int close, List<String>str, String op)
    {
        if(open==0 && close==0)
        {
            str.add(op);
            return;
        }
        
        if(open != 0)
        {
            String op1 = op;
            op1 += '(';
            BalParanthesis(open-1,close,str,op1);
        }
        if(close > open)
        {
            String op2 = op;
            op2 += ')';
            BalParanthesis(open,close-1,str,op2);
        }
    return;
    }
    
    
    public List<String> generateParenthesis(int n)
    {
        List<String>str = new ArrayList<>();
        int open=n;
        int close=n;
        
        String op="";
        
        BalParanthesis(open,close,str,op);
        return str;
    }
}