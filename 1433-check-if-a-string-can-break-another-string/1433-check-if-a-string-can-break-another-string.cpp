class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) 
    {
        sort(s1.begin(), s1.end());    
        sort(s2.begin(), s2.end());
        
        if(s2>s1)
        {
            for(int i=0; i<s1.length(); i++)
            {
                if(s2[i] < s1[i])    return false;
            }
        }
        else
        {
            for(int i=0; i<s1.length(); i++)
            {
                if(s1[i] < s2[i])    return false;
            }
        }
    return true;
    }
};