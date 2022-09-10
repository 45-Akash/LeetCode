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
    
    int largestRectangleArea(vector<int>& h)
    {
        int n = h.size();
        int max_Area = INT_MIN;
        
        vector<int>next(n), prev(n);
        next = nextSmallerElements(h, n);
        
        prev = prevSmallerElements(h, n);
        
        for(int i=0; i<n; i++)
        {
            int l = h[i];
            if(next[i]==-1)
                next[i] = n;
            
            int b = next[i] - prev[i] - 1;
            int area = l*b;
            max_Area = max(max_Area, area);
        }
    return max_Area;
    }
};