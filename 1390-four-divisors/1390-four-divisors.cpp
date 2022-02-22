class Solution {
public:
    int sumFourDivisors(vector<int>& nums)
    {
        int finalSum=0;
        for(auto it:nums)
        {
            int sum=0;
            int f=0;
            int val=it;
            int cnt=0;
            int i=1;
            
            while(i<=sqrt(val))
            {
                if(val%i==0)
                {
                    sum+=i;
                    cnt++;
                    if(val/i!=i)
                    {
                        cnt++;
                        sum+=(val/i);
                    }
                }
                if(cnt>4) break;
                i++;
            }
            if(cnt==4)  finalSum+=sum;
        }
    return finalSum;
    }
};