class Solution {
public:
    void subseq(int ind, string tiles, set<string>&st, string str)
    {
        if(ind == tiles.length())
        {
            if(str.length()>0)   st.insert(str);
            return;
        }
        
        str.push_back(tiles[ind]);
        subseq(ind+1, tiles, st, str);
        
        str.pop_back();
        subseq(ind+1, tiles, st, str);
        return;
    }
    int numTilePossibilities(string tiles)
    {
        set<string>st;
        sort(tiles.begin(), tiles.end());
        
        do{
            subseq(0, tiles, st, "");
            st.insert(tiles);
        }while(next_permutation(tiles.begin(), tiles.end()));
        
    return st.size();
    }
};