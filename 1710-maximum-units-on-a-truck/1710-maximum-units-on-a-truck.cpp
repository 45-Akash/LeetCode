class Solution {
public:
    
    static bool sortBySec(vector<int>v1, vector<int>v2)
    {
        return (v1[1] > v2[1]);
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(), boxTypes.end(), sortBySec);
        int count=0;
        
        for(int i=0; i<boxTypes.size(); i++)
        {
            if(truckSize<=0) break;
            
            count += (min(truckSize, boxTypes[i][0]) * boxTypes[i][1]);
            truckSize -= boxTypes[i][0];
        }
    return count;
    }
};