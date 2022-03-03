class Solution {
public:
    int nextGreaterElement(int n)
    {
        vector<int>v;
        int c=n;
        
        while(c!=0)
        {
            v.push_back(c%10);
            c/=10;
        }
        
        sort(v.begin(), v.end());
        int ans=INT_MAX;
        int f=0;
        do
        {
            long long num=0;
            for(int i=0; i<v.size(); i++)      num = num*10 + v[i];
            
            if(num<=INT_MAX && num>n)
            {
                if(ans>=num)    
                {
                    f=1;
                    ans=num;
                }
            }
            
        }while(next_permutation(v.begin(), v.end()));
        
        if(f==0)  return -1;
        return ans;
    }
};