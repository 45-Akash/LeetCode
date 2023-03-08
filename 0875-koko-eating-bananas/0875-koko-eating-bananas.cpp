class Solution {
public:
    int calHour(int speed, vector<int>& piles, int h)
    {
        int hour = 0;
        for(auto it:piles)
        {
            hour += it/speed;
            if(it%speed != 0) hour++;
            if(hour > h) break;
        }
    return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h)
    {
        int n = piles.size();
        int min_val = *min_element(piles.begin(), piles.end());
        int max_val = *max_element(piles.begin(), piles.end());
        
        int s = 1, e = max_val;
        int ans=0;
        while(s<=e)
        {
            int mid = s + (e-s)/2;
            
            int hours = calHour(mid, piles, h);
            if(hours <= h)
            {
                e = mid-1;
                ans = mid;
            }
            else
            {
                s = mid+1;
            }
        }
    return ans;
    }
};