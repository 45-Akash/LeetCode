class Solution {
public:
    int compare(string s1, string s2, vector<int>& v)
    {
        int i=0;
        int j=0;
        int compareVal=0;
        while(i<s1.length() && j<s2.length() && compareVal==0)
        {
            compareVal = v[s1[i]-'a'] - v[s2[j]-'a'];
            i++;
            j++;
        }
        if(compareVal==0)
        {
            return s1.length()-s2.length();
        }
        return compareVal; 
    }
    bool isAlienSorted(vector<string>& words, string order) 
    {
        vector<int> v(26, 0);
        for(int i=0; i<26; i++)
        {
            v[order[i]-'a'] = i+1;
        }
        
        bool flag = true;
        for(int i=0; i<words.size()-1; i++)
        {
            if(compare(words[i], words[i+1], v)>0)
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};