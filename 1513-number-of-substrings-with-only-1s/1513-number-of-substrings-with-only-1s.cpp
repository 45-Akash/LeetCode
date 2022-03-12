class Solution {
public:
    int numSub(string s)
    {
        int cnt=0;
        int m=1000000007;
        
        int c=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                c=c%m+1;
                cnt=cnt%m+c%m;
            }
            else   c=0;
        }
    return cnt;
    }
};