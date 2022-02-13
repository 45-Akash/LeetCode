class Solution {
public:
    
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king)
    {
        int n=queens.size();
        vector<vector<int>>ans;
        set<vector<int>>st;
        
        for(int i=0; i<n; i++)
        {
            st.insert(queens[i]);
        }
        
        int r=king[0];
        int c=king[1];
        
        while(r<8 && c<8)
        {
            vector<int>v;
            v.push_back(r);
            v.push_back(c);
            if(st.find(v)!=st.end())    
            {
                ans.push_back(v);
                break;
            }
            r++;
            c++;
        }
        
        r=king[0];
        c=king[1];
        while(r<8 && c>=0)
        {
            vector<int>v;
            v.push_back(r);
            v.push_back(c);
            if(st.find(v)!=st.end())    
            {
                ans.push_back(v);
                break;
            }
            r++;
            c--;
        }
        
        r=king[0];
        c=king[1];
        while(r>=0 && c>=0)
        {
            vector<int>v;
            v.push_back(r);
            v.push_back(c);
            if(st.find(v)!=st.end())    
            {
                ans.push_back(v);
                break;
            }
            r--;
            c--;
        }
        
        r=king[0];
        c=king[1];
        while(r>=0 && c<8)
        {
            vector<int>v;
            v.push_back(r);
            v.push_back(c);
            if(st.find(v)!=st.end())    
            {
                ans.push_back(v);
                break;
            }
            r--;
            c++;
        }
        
        r=king[0];
        c=king[1];
        while(c>=0)
        {
            vector<int>v;
            v.push_back(r);
            v.push_back(c);
            if(st.find(v)!=st.end())    
            {
                ans.push_back(v);
                break;
            }
            c--;
        }
        
        r=king[0];
        c=king[1];
        while(c<8)
        {
            vector<int>v;
            v.push_back(r);
            v.push_back(c);
            if(st.find(v)!=st.end())    
            {
                ans.push_back(v);
                break;
            }
            
            c++;
        }
        
        r=king[0];
        c=king[1];
        while(r<8)
        {
            vector<int>v;
            v.push_back(r);
            v.push_back(c);
            if(st.find(v)!=st.end())    
            {
                ans.push_back(v);
                break;
            }
            r++;
            
        }
        
        r=king[0];
        c=king[1];
        while(r>=0)
        {
            vector<int>v;
            v.push_back(r);
            v.push_back(c);
            if(st.find(v)!=st.end())    
            {
                ans.push_back(v);
                break;
            }
            r--;  
        }
    return ans;
    }
};