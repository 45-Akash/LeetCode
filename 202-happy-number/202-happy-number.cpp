class Solution {
public:
    bool isHappy(int n)
    {
        unordered_map<int,int>mp;
        mp[n]++;
        while(n!=1)
        {
            int copy=n;
            n=0;
            
            while(copy!=0)
            {
                n = n + pow(copy%10,2);
                copy/=10;
            }
            
            if(mp[n]==0)         mp[n]++;
            else                 return false;
        }
        
    return true;
    }
};