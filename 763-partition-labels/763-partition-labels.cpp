class Solution {
public:
    vector<int> partitionLabels(string s)
    {
        unordered_map<char,int>last;
        vector<int>ans;
        int size = s.size();
        
        for(int i=size-1; i>=0; i--)
        {
            if(last[s[i]]==0)     last[s[i]] = i;
        }
        
        for(int i=0; i<size; i++)
        {
            char ch = s[i];
            int end = last[ch];
            int j;
            for(j=i; j<end; j++)
            {
                if(last[s[j]]>end)   end = last[s[j]];
            }
            int val = j-i+1;
            i=j;
            ans.push_back(val);
        }
    return ans;
    }
};