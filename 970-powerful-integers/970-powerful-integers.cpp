class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound)
    {
        vector<int>ans;
        int integer=1;
        set<int>st;
       
        if(x==1 && y==1)
        {
            if(bound>=2)      ans.push_back(2);
            return ans;
        }
        
        if(x==1)
        {
            for(int j=0; pow(y,j)<=bound; j++)
            {
                int val = 1+pow(y,j);
                if(st.find(val)==st.end()) 
                {
                    ans.push_back(val);
                    st.insert(val);
                }
            }
        }
        else
        {
            for(int i=0; pow(x,i)<=bound; i++)
            {
                if(y==1)
                {
                    int val = 1+pow(x,i);
                    if(st.find(val)==st.end()) 
                    {
                        ans.push_back(val);
                        st.insert(val);
                    }
                }
                else
                {
                    for(int j=0; pow(y,j)<=bound; j++)
                    {
                        int val = pow(y,j)+pow(x,i);
                        if(st.find(val)==st.end()) 
                        {
                            ans.push_back(val);
                            st.insert(val);
                        }
                    }
                }

            }
        }
        vector<int>ds;
        for(auto it:ans)
        {
            if(it<=bound)   ds.push_back(it);
        }
    return ds;
    }
};