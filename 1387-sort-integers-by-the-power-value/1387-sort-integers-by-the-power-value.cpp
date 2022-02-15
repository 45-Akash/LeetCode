class Solution {
public:
    int getKth(int lo, int hi, int k)
    {
        multimap<int,int>mp;
        
        for(int i=lo; i<=hi; i++)
        {
            int steps=0;
            int num=i;
            while(num!=1)
            {
                if(num%2==0)     num/=2;
                else             num = num*3+1;
                steps++;
            }
        mp.emplace(steps, i);
        }
        
        int ans=0;
        for(auto it:mp)
        {
            ans = it.second;
            k--;
            if(k==0)    break;
        }
    return ans;
    }
};