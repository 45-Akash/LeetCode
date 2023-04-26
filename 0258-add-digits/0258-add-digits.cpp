class Solution {
public:
    int addDigits(int num)
    {
       int sum=num;
        
        while(sum >= 10)
        {
            sum=0;
            while(num != 0)
            {
                int rem = num%10;
                sum+=rem;
                num/=10;
            }
            num=sum;
            
        }
        
        return sum;
    }
};