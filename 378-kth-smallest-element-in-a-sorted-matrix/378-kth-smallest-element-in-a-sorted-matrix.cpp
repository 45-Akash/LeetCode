class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k)
    {
        vector<int>vec;
        int size = matrix.size();
        // k = k%size;
        
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                int num = matrix[i][j];
                vec.push_back(num);
            }
        }
        
        sort(vec.begin(), vec.end());
        
        int ans = vec[k-1];
        
    return ans;
        
    }
};