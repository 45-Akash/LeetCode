class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit)
    {
        sort(people.begin(), people.end());
        int n = people.size();
        set<int>st;
        int cnt=0;
        
        int s=0;
        int e;
        for(int i=0; i<n; i++)
        {
            if(people[i]>limit)    break;
            e=i;
        }
        
        cnt += n-e-1;
        
        while(s<=e)
        {
            int sum = people[s]+people[e];
            if(sum>limit)  
            {
                e--;
            }
            else
            {
                s++;
                e--;
            }
            cnt++;
            
        }
    return cnt;
    }
};