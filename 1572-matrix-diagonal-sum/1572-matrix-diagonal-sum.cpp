class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int len=mat.size();
        //cout<<len<<endl;
        int sum=0;
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<len; j++)
                if(i==j || (i+j)==(len-1))
                    sum+=mat[i][j];
        }
    return sum;  
    }
};