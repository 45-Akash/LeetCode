//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string s,char x[], int b[],int n)
      {
           string ans;
           unordered_map<char, int>mp;
        //   int n = w.length();
           
           for(int i=0; i<n; i++)
           {
               if(b[i]=='0')   mp[x[i]] = 1001;
               else            mp[x[i]] = b[i];
           }
           
           int max_sum=INT_MIN;
           int curr_sum=0;
           string sub="";
           int count=0, neg=0, neg_max=INT_MIN;
           string a;
           for(int i=0; i<s.length(); i++)
           {
               if(mp[s[i]]==0){
                    curr_sum += (int)s[i];
               }
               else
               {
                   count++;
                   if(mp[s[i]]<0)        
                   {
                       neg++;
                       if(mp[s[i]]>neg_max)
                       {
                           neg_max=mp[s[i]];
                           a = s[i];
                       }
                   }
                   if(mp[s[i]]!=1001)    curr_sum += mp[s[i]];    
               }
               sub += s[i];
               
               if(curr_sum > max_sum)
               {
                   max_sum = curr_sum;
                   ans = sub;
               }
               
               if(curr_sum < 0)     
               {
                   sub ="";
                   curr_sum=0;
               }
           }
           
           if(count==s.length() && neg==s.length())     return a;
           return ans;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends