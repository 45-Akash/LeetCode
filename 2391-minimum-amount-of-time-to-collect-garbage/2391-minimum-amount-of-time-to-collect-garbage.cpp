class Solution {
public:
    int help(char ch, int count, vector<string>& garbage, vector<int>& travel)
    {
        int cost=0;
        
        for(int i=0; i<garbage.size(); i++)
        {
            if(count == 0) return cost;
            for(int j=0; j<garbage[i].length(); j++)
            {
                if(garbage[i][j]==ch) 
                {
                    cost++;
                    count--;
                }
            }
            if(count!=0) cost += travel[i];
        }
    return cost;
    }
    int garbageCollection(vector<string>& garbage, vector<int>& travel)
    {
        int Mcount = 0;
        int Gcount = 0;
        int Pcount = 0;
        for(auto it:garbage)
        {
            for(int i=0; i<it.length(); i++)
            {
                if(it[i]=='P') Pcount++;
                if(it[i]=='M') Mcount++;
                if(it[i]=='G') Gcount++;
            }
        }
        
        int cost = 0;
        
        cost += help('M', Mcount, garbage, travel);
        cost += help('G', Gcount, garbage, travel);
        cost += help('P', Pcount, garbage, travel);
    return cost;
    }
};