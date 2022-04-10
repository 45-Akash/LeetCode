class Solution {
public:
    int arrangeCoins(int n)
    {
        int count=0;
        int base=1;
        while(n/base!=0) 
        {
            n=n-base;
            base++;
            count++;
            
        }
        return count;
    }
};