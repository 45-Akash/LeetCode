class Solution {
public:
    int removePalindromeSub(string S)
    {
        int count=1;
        int s=0;
        int e=S.length()-1;
        
        while(s<e)
        {
            if(S[s]!=S[e])
            {
                count++;
                break;
            }
            s++;
            e--;
        }
    return count;
    }
};