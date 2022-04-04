class Solution {
public:
    int mySqrt(int x)
    {
        if(x==0) return 0;
        long long int num=0;
        long long int sqr=0;
        while(sqr < x)
        {
            num++;
            sqr = num*num;
        }
        if(sqr==x) return num;
        return num-1;
    }
};