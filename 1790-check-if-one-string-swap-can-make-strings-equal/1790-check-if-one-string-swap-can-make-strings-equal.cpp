class Solution {
public:
    bool areAlmostEqual(string s1, string s2)
    {
        int n=s1.length();
        int notMatched=0;
        int ind1=-1,ind2;
        
        for(int i=0; i<n; i++)
        {
            if(s1[i]!=s2[i])
            {
                notMatched++;
                if(ind1==-1)        ind1 = i;
                else                ind2=i;
            }
        }
        if(notMatched!=2 && notMatched!=0)      return false;
        if(notMatched==0)                       return true;
        char temp = s1[ind1];
        s1[ind1] = s1[ind2];
        s1[ind2] = temp;
        
        if(s1==s2)         return true;
        return false;
    }
};