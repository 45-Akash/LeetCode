class Solution {
public:
    vector<int> makePrefixSum(char ch, string &s)
    {
        vector<int>ds;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==ch)
            {
                ds.push_back(i);
            }
        }
        return ds;
    }
    
    int first(vector<int>&v, int ind)
    {
        int s=0,e=v.size()-1,ans=-1;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(v[mid]==ind)         return v[mid];
            if(v[mid]>ind)          
            {
                ans=v[mid];
                e=mid-1;
            }
            else                    s=mid+1;
        }
        return ans;
    }
    int numberOfSubstrings(string s)
    {
        int len = s.length();
        int count=0;
        
        vector<int>a;
        vector<int>b;
        vector<int>c;
        
        a=makePrefixSum('a',s);
        b=makePrefixSum('b',s);
        c=makePrefixSum('c',s);
        
        for(int i=0; i<len; i++)
        {
            int firstA=first(a,i);
            int firstB=first(b,i);
            int firstC=first(c,i);
            
            if(firstA!=-1 && firstB!=-1 && firstC!=-1)
            {
                int maxi = max(firstA, firstB);
                maxi = max(maxi,firstC);
                count+=(len-maxi);
            }
        }
    return count;
    }
};