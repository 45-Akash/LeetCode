class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected)
    {
        int n = isConnected.size();
        vector<vector<int>>adj(n+1);
        vector<int>vis(n+1);
        queue<int>q;

        //create adjacency list
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i+1].push_back(j+1);
                    adj[j+1].push_back(i+1);
                }
            }
        } 

        int ans = 0;
        for(int i=1; i<=n; i++)
        {
            if(vis[i]==0)
            {
                // cout<<i<<endl;
                ans++;
                vis[i]=1;
                q.push(i);

                while(!q.empty())
                {
                    int node = q.front();
                    q.pop();

                    for(auto it:adj[node])
                    {
                        if(!vis[it])
                        {
                            vis[it] = 1;
                            q.push(it);
                        }
                    }
                }
            }
        }
    return ans;
    }
};