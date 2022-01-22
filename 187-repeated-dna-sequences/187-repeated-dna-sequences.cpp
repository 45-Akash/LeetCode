class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        vector<string>ans;
        int size = s.size();
        
        if(size<=10)       return ans;
        unordered_map<string,int>mp;
        
        for(int i=0; i<=size-10; i++)
        {
            string str="";
            for(int j=i; j<i+10; j++)      str += s[j];
            mp[str]++;
        }
        
        for(auto it : mp)
        {
            if(it.second > 1)    ans.push_back(it.first);
        }
    return ans;
    }
};