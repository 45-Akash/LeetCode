class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed)
    {
        vector<int>vec;
        vector<int>v;
        multiset<int>st;
        int count0 = 0;
        
        for(auto it:changed)    
        {
            if(it != 0)
            {
                st.insert(it);
            }
            else
            {
                count0++;
            }
        }
        
        if(count0%2==1) return v;
        
        sort(changed.begin(), changed.end());
        for(int i=0; i<changed.size(); i++)
        {
            if(changed[i] != 0)
            {
                int org = changed[i];
                int doub = 2*changed[i];

                if(st.find(org)!=st.end() && st.find(doub)!=st.end())
                {
                    vec.push_back(org);
                    st.erase(st.find(org));
                    st.erase(st.find(doub));
                }
            }
            
        }
        
        
        if(st.size()>0)
        {
            return v;
        }
        
        count0 /= 2;
        while(count0--)
            vec.push_back(0);
    return vec;
    }
};