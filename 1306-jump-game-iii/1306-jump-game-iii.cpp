class Solution {
public:
    
    bool canReach(vector<int>& arr, int start)
    {
        int n = arr.size();
        set<int>visited;
        
        deque<int>q;
        q.push_back(start);
        visited.insert(start);
        
        while(q.size())
        {
            int ind = q.front();
            if(arr[ind]==0)       return true;
            visited.insert(ind);
            q.pop_front();
            
            
            int left = ind - arr[ind];
            if(left>=0 && visited.find(left)==visited.end())   q.push_back(left);
            
            int right = ind + arr[ind];
            if(right<n  && visited.find(right)==visited.end())  q.push_back(right);
        }
    return false;
    }
};