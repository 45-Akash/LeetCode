class Solution {
public:
    int findTheWinner(int n, int k)
    {
        int playerleft = n;
        set<int>st;
        vector<int>vec;
        int counter = 0;
        
        for(int i=1; i<=n; i++)       vec.push_back(i);
        
        for(int i=0; st.size()!=vec.size()-1; i=(i+1)%vec.size())
        {
            if(st.find(vec[i]) == st.end() )
            {
                counter++;
            }
            if(counter==k)
            {
                st.insert(vec[i]);
                counter=0;
            }
            
        }
        
        for(auto it:st)
        {
            remove(vec.begin(), vec.end(), it);    
        }
        
        int ans = vec[0];
    return ans;
    }
};