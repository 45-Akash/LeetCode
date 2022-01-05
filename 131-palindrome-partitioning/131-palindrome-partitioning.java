class Solution {
    
    public boolean isPalindrome(int start, int end, String s)
    {
        while(start <= end)
        {
            if(s.charAt(start++) != s.charAt(end--))   return false;
        }
        return true;
    }
    
    public void fun(int ind, String s, List<String>path, List<List<String>>res)
    {
        if(ind == s.length())
        {
            res.add(new ArrayList<>(path));
            return;
        }
        
        for(int i=ind; i<s.length(); i++)
        {
            if(isPalindrome(ind, i, s))
            {
                path.add(s.substring(ind, i+1));
                fun(i+1, s, path, res);
                path.remove(path.size()-1);
            }
        }
    }
    public List<List<String>> partition(String s)
    {
        List<String>path = new ArrayList<>();
        List<List<String>>res = new ArrayList<>();
        
        fun(0, s, path, res);
        return res;
    }
    
}