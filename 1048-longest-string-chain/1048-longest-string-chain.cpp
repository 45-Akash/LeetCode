class Solution {
public:
    static bool sortByLen(string &s1, string &s2)
    {
        return s1.size() < s2.size();
    }
    
    bool Compare(string &s1, string &s2)
    {
        int l1 = s1.size();
        int l2 = s2.size();
        
        if(l1 != l2+1)   return false;
        int ind1=0, ind2=0;
        while(ind1 < l1)
        {
            if(s1[ind1] != s2[ind2])   ind1++;
            else
            {
                ind1++;
                ind2++;
            }
        }
        
        if(ind2 == l2 && ind1 == l1)     return true;
        return false;
    }
    int longestStrChain(vector<string>& words)
    {
        int n = words.size();
        vector<int>dp(n,1);
        
        sort(words.begin(), words.end(), sortByLen);
        
        int maxi = 1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(Compare(words[i], words[j]) && dp[i] < 1+dp[j])
                {
                    dp[i] = 1+dp[j];
                }
            }
            maxi = max(maxi, dp[i]);
        }
    return maxi;
    }
};