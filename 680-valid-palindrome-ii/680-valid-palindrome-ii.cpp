class Solution {
public:
    bool validPalindrome(string s)
    {
        int cnt=0;
        int e=s.length()-1;
        int n=e;
        int i=0;
        int break_s;
        int break_e;
        int f1=1,f2=1;
        
        while(i<=e)
        {
            if(s[i]!=s[e])
            {
                break_s=i;
                break_e=e;
                break;
            }
            else
            {
                i++;
                e--;
            }
        }
        
        int ds=break_s+1;
        int de=break_e;
        while(ds<=de)
        {
            if(s[ds]!=s[de])
            {
                f1=0;
                break;
            }
            ds++;
            de--;
        }
        ds=break_s;
        de=break_e-1;
        while(ds<=de)
        {
            if(s[ds]!=s[de])
            {
                f2=0;
                break;
            }
            ds++;
            de--;
        }
    
        if(f1||f2)       return true;
    return false;
    }
};