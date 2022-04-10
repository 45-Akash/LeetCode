class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        set<char>st;
        for(auto it:letters)            st.insert(it);
        letters.push_back(target);
        
        letters.clear();
        for(auto it:st)                 letters.push_back(it);
        sort(letters.begin(), letters.end());
        
        int ind=-1;
        
        for(int i=0; i<letters.size(); i++)
        {
            if(ind==-1 && letters[i]>target)
            {
                ind=i;
                break;
            }
            if(letters[i]==target)
            {
                ind = (i+1)%letters.size();
                break;
            }
            
        }
        if(ind==-1)       return letters[0];
    return letters[ind];
    }
};