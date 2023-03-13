class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity)
    {
        int cap = capacity;
        int ans = 0;
        
        int n = plants.size();
        for(int i=0; i<n; i++)
        {
            if(plants[i]<=cap)
            {
                cap -= plants[i];
                ans++;
            }
            else
            {
                cap = capacity;
                ans += (2*(i))+1;
                cap -= plants[i];
            }
        }
    return ans;
    }
};