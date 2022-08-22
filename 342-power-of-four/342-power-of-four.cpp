class Solution {
public:
    bool isPowerOfFour(int n)
    {
        int i=0;
        while(i<=sqrt(n))
        {
            if(n==pow(4,i))
            {
                return true;
            }
            i++;
        }
        return false;  
    }
};