class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        
        int size = prices.size();
        if(size==1)         return 0;
        vector<int>max_after(size);
        
        max_after[size-1] = prices[size-1];
        for(int i=size-2; i>=0; i--)
        {
            if(prices[i] > max_after[i+1])
            {
                max_after[i] = prices[i];
            }
            else 
            {
                max_after[i] = max_after[i+1];
            }
        }
        int ans = INT_MIN;
        
        for(int i=0; i<size; i++)
        {
            if(max_after[i]-prices[i] > ans)
            {
                ans = max_after[i]-prices[i];
            }
        }
    return ans;
    }
};