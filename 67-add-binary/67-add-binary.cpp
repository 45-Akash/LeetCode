class Solution {
public:
    void helper(string &s, int &sum, int &carry)
    {
        if(sum==2)
        {
            s += '0';
            carry = 1;
        }
        else if(sum==3)
        {
            s += '1';
            carry = 1;
        }
        else if(sum==0 || sum==1)
        {
            s += (sum + '0');
            carry = 0;
        }
    }
    void helper2(string &s, int &carry)
    {
        if(carry==2)
        {
            carry = 1;
            s += '0';
        }
        else if(carry==3)
        {
            carry = 1;
            s += '1';
        }
        else if(carry==0 || carry==1)
        {
            s += (carry + '0');
            carry = 0;
        }
    }
    string addBinary(string a, string b)
    {
        int l = min(a.length(),b.length());
        int i = a.length()-1 , j = b.length()-1 , carry = 0;
        string ans = "";
        while(l--)
        {
            int sum = (a[i]-48) + (b[j]-48) + carry;
            helper(ans, sum, carry);
            i--;
            j--;
        }
        while(i>=0)
        {
            carry += (a[i] - 48);
            helper2(ans, carry);
            i--;
        }
        
        while(j>=0)
        {
            carry += (b[j] - 48);
            helper2(ans, carry);
            j--;
        }
        if(carry == 1)
            ans += '1';
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
        
        
    
};