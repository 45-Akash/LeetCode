class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust)
    {
        
        vector<int>t(n+1,0);
        vector<int>j(n+1,0);
        int judge=-1;
        for(int i=0; i<trust.size(); i++)
        {
            t[trust[i][0]] = 1;
        }
        
        for(int i=1; i<=n; i++)
        {
            if(t[i]==0)      
            {
                judge=i;
                break;
            }
        }
        
        if(judge == -1)    return -1;
        j[judge] = 1;
        for(int i=0; i<trust.size(); i++)
        {
            if(trust[i][1] == judge)
            {
                j[trust[i][0]] = 1;
            }
        }
        
        for(int i=1; i<=n; i++)
        {
            if(j[i] == 0) return -1;
        }
        
    return judge;
    }
};