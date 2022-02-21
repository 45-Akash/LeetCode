class Solution {
public:
    int minSwaps(string s)
    {
        int n=s.length();
        int start=0;
        int end=n-1;
        
        int open=0;
        int close=0;
        int cnt=0;
        
        while(start<end)
        {
            if(s[start]=='[') open++;
            else              close++;
            
            if(close>open)
            {
                while(s[end]!='[')
                {
                    end--;
                }
                char temp=s[start];
                s[start] = s[end];
                s[end]=temp;
                cnt++;
                close--;
                open++;
                end--;
            }
            start++;
        }
    return cnt;
    }
};