class Solution {
public:
    bool isPowerOfThree(int n)
    {
        int i=0;
        while(i<=sqrt(n))
        {
            if(n==pow(3,i))
            {
                return true;
                
            }
            i++;
        }
        return false;
    }
};