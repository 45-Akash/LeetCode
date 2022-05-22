class Solution {
    public int countSubstrings(String s)
    {
        int cnt=0;
        
        for(int i=0; i<s.length(); i++)
        {
            for(int j=i+1; j<=s.length(); j++)
            {
                String reverse = new StringBuffer(s.substring(i,j)).reverse().toString();
                if(s.substring(i,j).equals(reverse)) 
                {
                    cnt++;
                }
            }
        }
    return cnt;
    }
}