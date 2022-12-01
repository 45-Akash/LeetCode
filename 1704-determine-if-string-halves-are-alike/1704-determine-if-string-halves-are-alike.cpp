class Solution {
public:
    bool halvesAreAlike(string s)
    {
        int v=0;
        
        for(int i=0; i<s.length(); i++)
        {
            char ch = s[i];
            
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
                if(i<s.length()/2)  v++;
                else                v--;
            }
        }
        
    return v==0? 1: 0;
    }
};