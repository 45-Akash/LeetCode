class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
        
        int slen1 = word1.size();
        int slen2 = word2.size();
        
        string str1="";
        string str2="";
        for(int i=0; i<slen1; i++)
        {
            str1 = str1 + word1[i];
        }
        
        for(int i=0; i<slen2; i++)
        {
            str2 = str2 + word2[i];
        }
         
        if(str1.compare(str2)==0)
        {
            return true;
        }
        return false;
    }
};