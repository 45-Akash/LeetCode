class Solution {
public:
    bool checkInclusion(string s1, string s2)
    {
        int n=s2.size();
        int len=s1.size();
        sort(s1.begin(), s1.end());
        
        for(int i=0; i<=n-len; i++)
        {
            string sub= s2.substr(i, len);
            sort(sub.begin(), sub.end());
            if(sub==s1)    
            {
                cout<<sub<<" "<<s1<<endl;
                return true;  
            }
        }
    return false;
    }
};