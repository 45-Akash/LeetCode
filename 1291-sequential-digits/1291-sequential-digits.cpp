class Solution {
public:
    vector<int> sequentialDigits(int low, int high)
    {
        vector<int>ans;
        vector<int>ds;
        
        for(int i=1; i<10; i++)
        {
            for(int j=1; j<10; j++)
            {
                ;
                if(i+j <= 10)
                {
                    int sum=0;
                    int temp=i;
                    int k=j;
                    while(temp--)
                    {
                        sum = sum*10+k;
                        k++;
                    }
                    ds.push_back(sum);
                }
            }
        }
        
        for(auto it : ds)
        {
            if(it >= low && it <= high)    ans.push_back(it);
        }
    return ans;  
    }
};