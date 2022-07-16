class Solution {
public:
    long long mod = 1e9 + 7;
    int dp[51][51][51];
    int boundary(int m, int n, int r, int c, int maxMove)
    {
        if(r==m || r==-1 || c==n || c==-1)   return 1;
        if(maxMove==0)                       return 0;
        
        if(dp[r][c][maxMove] != -1)        return dp[r][c][maxMove];
        
        int maxi = 0, up=0, down=0, right=0, left=0;
         up = boundary(m, n, r+1, c, maxMove-1);
         down = boundary(m, n, r-1, c, maxMove-1);
         left = boundary(m, n, r, c-1, maxMove-1);
         right = boundary(m, n, r, c+1, maxMove-1);
        
        return dp[r][c][maxMove] = (up % mod + down % mod + left % mod + right % mod)%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
    {
        memset(dp, -1, sizeof(dp));
        return boundary(m, n, startRow, startColumn, maxMove);
    }
};