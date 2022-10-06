class Solution {
public:
    bool isPalindrome(int x) 
    {
        int original_num=x;
        long long int new_num=0;
        
        while(x!=0)
        {
            int rem=x%10;
            new_num = new_num*10 + rem;
            x/=10;
        }
        if(new_num==original_num && original_num >= 0)
        {
            return true;
        }
        return false;
    }
};