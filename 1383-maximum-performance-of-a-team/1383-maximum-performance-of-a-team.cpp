class Solution {
public:
    static bool comp(pair<int,int> a, pair<int,int> b) 
    {
        if(a.first != b.first) 
        {
            return a.first > b.first;
        }
        return a.second < b.second;
    }
    
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) 
    {
        
        vector<pair<int, int> > a;
        for(int i=0; i<n; i++) 
        {
            a.push_back({efficiency[i], speed[i]});
        }
        sort(a.begin(), a.end(), comp);
        long ans = 0;
        long mod = 1000000007;
        priority_queue<int, vector<int>, greater<int> > pq;
        long c = 0;
        for(auto x: a) 
        {
            int eff = x.first;
            int sp = x.second;
            if(pq.size()>k-1) 
            {
                c -= pq.top();
                pq.pop();
            }
            pq.push(sp);
            c += sp;
            ans = max(ans, c * eff);
        }
        return ans%mod;
    }
};