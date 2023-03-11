class Solution {
public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int end = s.size();
        
        
        vector<char>vec;
        for(int i=0; i<end; i++)
        {
            if(iswalnum(s[i])) vec.push_back(tolower(s[i]));
        }
        start = 0, end = vec.size()-1;
        
        while(start<=end)
        {
            if(vec[start]!=vec[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};