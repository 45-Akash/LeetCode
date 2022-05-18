class Solution {
public:
    string getPermutation(int n, int k)
    {
        string str="";
        for(int i=1; i<=n; i++)
        {
            str+=to_string(i);
        }
        
        do
        {
            if(k==1) break;
            k--;
        }while(next_permutation(str.begin(), str.end()));
        
    return str;
    }
};