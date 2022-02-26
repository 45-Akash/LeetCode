class Solution {
public:
    double average(vector<int>& salary)
    {
        double sum=0;
        int len = salary.size();
        sort(salary.begin(), salary.end());
        
        sum = accumulate(salary.begin(), salary.end(), 0);
        sum -= salary[0];
        sum -= salary[len-1];
        len -= 2;
        double avg = sum /(len*1.0);
    return avg; 
    }
};