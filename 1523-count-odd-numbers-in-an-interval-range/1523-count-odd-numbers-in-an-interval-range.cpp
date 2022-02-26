class Solution {
public:
    int countOdds(int low, int high)
    {
        int cnt=0;
        if(low%2==1)    cnt++;
        if(high%2==1)   cnt++;
        if(cnt==2 && low==high)     return 1;
        int diff = high - low;
        if(cnt==2)    diff--;
        cnt += diff/2;
    return cnt;
    }
};