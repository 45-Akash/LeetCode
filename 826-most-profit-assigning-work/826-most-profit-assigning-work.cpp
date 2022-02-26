class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) 
    {
        int sum=0;
        vector<vector<int>>ds;
        for(int i=0; i<profit.size(); i++)
        {
            vector<int>v;
            v.push_back(difficulty[i]);
            v.push_back(profit[i]);
            ds.push_back(v);
        }
        sort(ds.begin(), ds.end());
        for(int i=1; i<ds.size(); i++)
        {
            ds[i][1] = max(ds[i-1][1], ds[i][1]);
        }
        
        for(int i=0; i<worker.size(); i++)
        {
            int s=0;
            int e=ds.size()-1;
            int t=worker[i];
            int ind=-1;
            while(s<=e)
            {
                int mid = s + (e-s)/2;
                int midVal = ds[mid][0];
                
                if(t>=midVal)
                {
                    ind = mid;
                    s = mid+1;
                }
                else               e = mid-1;
            }
            if(ind!=-1) sum += ds[ind][1];
        } 
     return sum;  
    }
};