class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int>pq;
        
        for(int i=0; i<stones.size(); i++)
        {
            pq.push(stones[i]);
        }
        
        while(pq.size()>1)
        {
            int num1=pq.top();
            pq.pop();
            int num2=pq.top();
            pq.pop();
            
            if(num1!=num2)      pq.push(num1-num2);
        }
        
    if(pq.size()==0)   return 0;
    return pq.top();
    }
};