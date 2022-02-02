class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms)
    {
        int len=rooms.size();
        vector<int>vec(len,-1);
        set<int>st;
        st.insert(0);
        
        while(st.size())
        {
            for(auto it:st)
            {
                if(vec[it]==-1)
                {
                    vec[it]=0;
                    for(int i=0; i<rooms[it].size(); i++)
                    {
                        if(vec[rooms[it][i]]==-1)    
                        {
                            // vec[rooms[it][i]]=0;
                            st.insert(rooms[it][i]);
                        }
                    }
                }
                
                st.erase(it);
                
            }
        }
        
        for(auto it:vec)
        {
            if(it==-1)     return false;
        }
    return true;
    }
};