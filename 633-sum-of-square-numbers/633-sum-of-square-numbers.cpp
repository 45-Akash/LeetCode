class Solution {
public:
    bool judgeSquareSum(int c)
    {
        if(c==0)        return true;
        int limit = sqrt(c);
        int s=0;
        int e=limit;
        
        while(s<=e)
        {
            long long int val = pow(s,2)+pow(e,2);
            
            if(val==c)    return true;
            if(val > c)   e--;
            else          s++;
            
        }
    return false;
    }
};