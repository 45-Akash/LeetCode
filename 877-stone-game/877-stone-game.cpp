class Solution {
public:
    int stone(vector<int>&piles,int sum, int s, int e, vector<vector<int>>& dp, bool turn)
    {
        if(s>=e)    return sum;
        
        if(dp[s][e] != -1)       return dp[s][e];
        
        if(turn)
        {
            return dp[s][e] = max(stone(piles, sum+piles[s], s+1, e, dp, false),
                                 stone(piles, sum+piles[e], s,e-1 , dp, false));
        }
        else
        {
            return dp[s][e] = min(stone(piles, sum-piles[s], s+1, e, dp, true),
                                 stone(piles, sum-piles[e], s,e-1 , dp, true));
        }
    }
    bool stoneGame(vector<int>& piles)
    {
        int n=piles.size()-1;
        vector<vector<int>>dp(n+1);
        
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=n; j++)   dp[i].push_back(-1);
        }
        bool turn = true;
        int sum = stone(piles, 0, 0, n, dp, turn);
        
        return true;
    }
};