class Solution {
public:
    bool checkIfPangram(string sentence)
    {
        set<char>st;
        int size = sentence.length();
        for(int i=0; i<size; i++)
        {
            st.insert(sentence[i]);
        }
        
        if(st.size()==26)     return true;
    return false;
    }
};