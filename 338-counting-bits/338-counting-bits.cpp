class Solution {
public:
    vector<int> countBits(int n)
    {
        vector<int>ans;
        
        for(int i=0; i<=n; i++)
        {
            int num = i;
            int countOnes = 0;
            
            while(num != 0)
            {
                int rem = num%2;
                if(rem == 1)      countOnes++;
                num = num/2;
            }
            ans.push_back(countOnes);
        }
    return ans;
    }
};