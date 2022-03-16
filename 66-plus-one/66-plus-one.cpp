class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
       int len = digits.size();
       int sum = digits[len-1]+1;
       int rem = sum%10;
       int carry = sum/10;
       int flag=0;
        
       if(carry==0)
       {
           digits[len-1]=rem;
           return digits;
       }
        digits[len-1]=rem;
        if(len==1)
        {
            int ind= len  ;
            vector<int>vec(ind+1);
            vec[0]=1;
            vec[1]=0;
            return vec;
        }
        for(int  i=len-2; i>=0; i--)
        {
            sum = digits[i]+carry;
            digits[i] = sum%10;
            carry = sum/10;
            if(carry==0)
            {
               return digits;
               
            }
            if(i==0)
            {
                flag=1;
            }
        }
        int ind= len  ;
        vector<int>vec(ind+1);
        if(flag==1)
        {
            
            for(int i=len-1; i>=0; i--)
            {
                vec[ind]=digits[i];
                ind--;
            }
            
            vec[0]=1;
        }
     return vec;
        
    }
};