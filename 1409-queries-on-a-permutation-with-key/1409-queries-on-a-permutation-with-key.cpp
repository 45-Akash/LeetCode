class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m)
    {
        deque<int>deq;
        for(int i=1; i<=m; i++)   deq.push_back(i);
        
        vector<int>ans;
        
        for(int i=0; i<queries.size(); i++)
        {
            int val = queries[i];
            int ind = 0;
            
            for(auto it=deq.begin(); it!=deq.end(); it++)
            {
                if(*it==val)
                    break;
                ind++;
            }
            
            deque<int>::iterator it;
            it=deq.begin()+ind;
            
            deq.erase(it);
            deq.push_front(val);
            ans.push_back(ind);
        }
    return ans;
    }
};