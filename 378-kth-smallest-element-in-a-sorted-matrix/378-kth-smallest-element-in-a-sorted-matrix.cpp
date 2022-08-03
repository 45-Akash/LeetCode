class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k)
    {
        priority_queue<int>pq;
        int r = matrix.size();
        int c = matrix[0].size();
        int i=0, j=0;
        int f=0;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(f==1)
                {
                    if(matrix[i][j] <= pq.top())
                    {
                        pq.pop();
                        pq.push(matrix[i][j]);
                    }
                }
                else
                {
                    k--;
                    pq.push(matrix[i][j]);
                    if(k==0) 
                    {
                        f=1;
                    }
                }   
            }
        }
    return pq.top();
    }
};