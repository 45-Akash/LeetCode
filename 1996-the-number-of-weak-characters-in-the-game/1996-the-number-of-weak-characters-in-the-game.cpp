class Solution {
public:
    static bool sorto(vector<int>&v1, vector<int>&v2)
    {
        if(v1[0]==v2[0])
        {
            return v1[1] > v2[1];
        }
        return v1[0] < v2[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& pro)
    {
        int n=pro.size();
        sort(pro.begin(), pro.end(), sorto);
        int ans = 0;
        int max_till_now=INT_MIN;
        
        for(int i=n-1; i>=0; i--)
        {
            if(pro[i][1] < max_till_now)
                ans++;
            max_till_now = max(max_till_now, pro[i][1]);
        }
    return ans;
    }
};