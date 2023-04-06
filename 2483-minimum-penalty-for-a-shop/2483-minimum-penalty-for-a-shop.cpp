class Solution {
public:
    int bestClosingTime(string customers)
    {
        int n = customers.length();
        
        vector<int>vecY(n);
        vector<int>vecN(n);
        
        int totalY=0, totalN=0;
        if(customers[0]=='Y') 
        {
            vecY[0]=1;
            totalY++;
        }
        if(customers[0]=='N') 
        {
            vecN[0]=1;
            totalN++;
        }
        
        for(int i=1; i<n; i++)
        {
            vecY[i] = vecY[i-1];
            vecN[i] = vecN[i-1];
            
            if(customers[i]=='N') 
            {
                totalN++;
                vecN[i]++;
            }
            if(customers[i]=='Y') 
            {
                totalY++;
                vecY[i]++;
            }
        }
        
        int penalty=totalY;
        int ind=0;
        for(int i=0; i<n; i++)
        {
            int yesLoss = totalY-vecY[i];
            int noLoss = vecN[i];
            
            int loss = yesLoss + noLoss;
            // cout<<loss<<endl;
            if(loss<penalty)
            {
                penalty=loss;
                ind=i+1;
            }
        }
    return ind;
    }
};