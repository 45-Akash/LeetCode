class Solution {
public:
    int minimumLength(string s)
    {
        int n=s.length();
        int S=0;
        int e=n-1;
        int deleted=0;
        
        while(S<e)
        {
            char start=s[S];
            char end=s[e];
            if(start==end)
            {
                while(S<=e && s[S]==start)
                {
                    S++;
                    deleted++;
                }
                while(e>=S && s[e]==end)
                {
                    e--;
                    deleted++;
                }
            }
            else   break;
        }
    return n-deleted;
    }
};