class Solution {
    public int mostWordsFound(String[] sentences)
    {
        int count=0;
        int Max_len = Integer.MIN_VALUE;
        for(int i=0; i<sentences.length; i++)
        {
            String[] words = sentences[i].split(" ");
            int len = words.length;
            
            if(len > Max_len)    Max_len = len;
        }
    return Max_len;
    }
}