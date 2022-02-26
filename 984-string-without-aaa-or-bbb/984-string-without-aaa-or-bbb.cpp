class Solution {
public:
    
    string solve(int a, int b, char l)
    {
        string ans="";
        if(l == 'b')
        {
            for(int i=0; i<b; i++)
            {
                ans += "ab";
            }
        }
        else
        {
            for(int i=0; i<b; i++)
            {
                ans += "ba";
            } 
        }
    return ans;
    }
    string strWithout3a3b(int a, int b)
    {
        int d = abs(a-b);
        string ans = "";
        if(d==0)
        {
            ans = solve(a,b,' ');
        }
        else if(a > b)
        {
            while(a>0 || b>0)
            {
                if(a==b)
                {
                    char last = ans[ans.length()-1];
                    ans += solve(a,b,last);
                    break;
                }
                int cnt=0;
                while(a>0)
                {
                    cnt++;
                    ans += "a";
                    a--;
                    if(cnt==2) break;
                }
                if(b>0)
                {
                    ans += "b";
                    b -= 1;
                }
            }
        }
        else 
        {
            while(a>0 || b>0)
            {
                if(a==b)
                {
                    char last = ans[ans.length()-1];
                    ans += solve(a,b,last);
                    break;
                }
                int cnt=0;
                while(b>0)
                {
                    cnt++;
                    ans += "b";
                    b--;
                    if(cnt==2) break;
                }
               
                if(a>0)
                {
                    ans += "a";
                    a -= 1;
                }
            }
        }
    return ans;
    }
};