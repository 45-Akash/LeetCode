class Solution {
public:
    void perm(string str, int ind, int &count)
    {
        if(ind==str.length())
        {
            count++;
            return;
        }
       
        for(int i=ind; i<str.length(); i++)
        {
            int val = int(str[i]);
            int cond_1= val % (ind+1), cond_2=(ind+1)%val;
    
            if(cond_1==0 || cond_2==0) 
            {
                swap(str[ind], str[i]);
                perm(str, ind+1, count);
                swap(str[ind], str[i]);
            }
           
        }
        return;
        
    }
    int countArrangement(int n)
    {
        string str;
        for(int i=1; i<=n; i++)  str+=i;
        int count=0;
        perm(str, 0, count);
        return count;
    }
};