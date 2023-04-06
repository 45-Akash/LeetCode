class Solution {
public:
    int findLucky(vector<int>& arr)
    {
        int max_number = -1;
        
        map<int, int>mp;
        for(auto it : arr)  mp[it]++;
        
        for(auto it : mp) 
        {
            if(it.first==it.second)
            {
                max_number = max(max_number, it.first);
            }
        }
    return max_number;
    }
};