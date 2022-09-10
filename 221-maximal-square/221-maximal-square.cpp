class Solution {
public:
    vector<int> nextSmallerElements(vector<int>& h, int n)
    {
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);
        
        for(int i=n-1; i>=0; i--)
        {
            int curr = h[i];
            while(s.top() != -1 && h[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
    return ans;
    }
    
    vector<int> prevSmallerElements(vector<int>& h, int n)
    {
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);
        
        for(int i=0; i<n; i++)
        {
            int curr = h[i];
            while(s.top() != -1 && h[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
    return ans;
    }
    int maximalSquare(vector<vector<char>>& matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<vector<int>>dp(row, vector<int>(col));
        for(int i=0; i<col; i++)
        {
            dp[0][i] = (matrix[0][i])-48;
        }
        
        for(int i=1; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(matrix[i][j]=='0')
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = dp[i-1][j] + (matrix[i][j])-48;
                }
            }
        }
        
        
        
        int max_Area = INT_MIN;
        for(int i=0; i<row; i++)
        {
            vector<int>next(col), prev(col);
            next = nextSmallerElements(dp[i], col);
            prev = prevSmallerElements(dp[i], col);
            for(int j=0; j<col; j++)
            {
                
                if(next[j]==-1)
                {
                    next[j] = col;
                }
                
                int l = dp[i][j];
                int b = next[j] - prev[j] - 1;
                int area = min(l,b)*min(l,b);
                max_Area = max(max_Area, area);
            }
        }
    return max_Area; 
    }
};