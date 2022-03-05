class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        int l1=word1.length();
        int l2=word2.length();
        
        int p=0;
        string ans="";
        
        while(p<max(l1,l2))
        {
            if(p<l1)   ans += word1[p];
            if(p<l2)   ans += word2[p];
            p++;
        }
    return ans;
    }
};