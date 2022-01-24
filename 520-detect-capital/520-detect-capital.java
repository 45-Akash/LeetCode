class Solution
{
    public boolean check(String words, int Case) 
    {
        int small=0;
        int capital=0;
        
        if(Case==0)
        {
            for(int i=1; i<words.length(); i++)
            {
                if(words.charAt(i)>=65 && words.charAt(i)<=90)   capital++;
                else                                             small++;
            }
        }
        else 
        {
            for(int i=0; i<words.length(); i++)
            {
                if(words.charAt(i)>=65 && words.charAt(i)<=90)   capital++;
                else                                             small++;
            }
        }
        int max = Math.max(capital,small);
        if(capital+small == max)  return true;
        return false;
    }
    public boolean detectCapitalUse(String words)
    {
        int first=0;
        if(words.charAt(0)>=65 && words.charAt(0)<=90)   first=1;
        
        if(first==1)
        {
            return check(words,0);
        }
        return check(words,1);
    }
}