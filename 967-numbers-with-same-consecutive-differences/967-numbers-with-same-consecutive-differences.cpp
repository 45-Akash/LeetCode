class Solution {
public:
    
    void solve(int n, int k, int num, int len, set<int>&st)
    {
        if(len==n)    
        {
            // ans.push_back(num);
            st.insert(num);
            return;
        }
        
        
        int number = num;
        int last_digit = num%10;
        int add = last_digit + k;
        
        if(add <= 9)
        {
            num = num*10 + add;
            solve(n, k, num, len+1, st);
        }
        
        int sub = last_digit - k;
        if(sub >= 0)
        {
            number = number*10 + sub;
            solve(n, k, number, len+1, st);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k)
    {
        vector<int>ans;
        set<int>st;
        for(int i=1; i<=9; i++)
        {
            solve(n, k, i, 1, st);
        }
        
        for(auto it:st)
        {
            ans.push_back(it);
        }
    return ans;
    }
};