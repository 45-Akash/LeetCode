class Solution {
public:
    int maxDistToClosest(vector<int>& seats) 
    {
        vector<int>occupied;
        int size=seats.size();
        for(int i=0; i<size; i++)
        {
            if(seats[i]==1)   occupied.push_back(i);
        }
        
        int max_space = INT_MIN;
        int startGap = occupied[0]-0;
        int endGap = size - occupied[occupied.size()-1]-1;
        
        for(int i=0; i<occupied.size()-1; i++)
        {
            max_space = max(max_space, occupied[i+1]-occupied[i]);
        }
        
        int max_dist = max_space/2;
        int max_edge = max(startGap, endGap);
        
        return max(max_dist, max_edge);
    }
};