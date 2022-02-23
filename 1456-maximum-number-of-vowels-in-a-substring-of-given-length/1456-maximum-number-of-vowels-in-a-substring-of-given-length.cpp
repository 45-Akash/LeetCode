class Solution {
public:
    int maxVowels(string s, int k)
    {
        int n = s.length();
        vector<int>arr(n,0);
        int max_len=INT_MIN;
        
        if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u')    arr[0]=1;
        for(int i=1; i<n; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')      
            {
                arr[i]=1+arr[i-1];
            }
            else arr[i] = arr[i-1];
        }
        
        for(int i=0; i<=n-k; i++)
        {
            int len;
            if(i==0)    len=arr[k-1];
            else        len = arr[i+k-1]-arr[i-1];
            max_len = max(max_len, len);
        }
    return max_len;   
    }
};