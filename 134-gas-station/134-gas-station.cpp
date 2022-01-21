class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
       int tank=0, total=0, index=0;
        
        for(int i=0; i<gas.size(); i++)
        {
            int consume = gas[i]-cost[i];
            tank += consume;
            if(tank < 0)
            {
                index = i+1;
                tank=0;
            }
            total += consume;
        }
        
       return total < 0 ? -1 : index%gas.size(); 
    }
};