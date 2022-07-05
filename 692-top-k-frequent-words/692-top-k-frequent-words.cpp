class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k)
    {
        map<string,int>mp;
        vector<string>str;
        
        for(int i=0; i<words.size(); i++)    mp[words[i]]++;
    
        while(k--)
        {
            int maxFreq = INT_MIN;
            string maxFreqEle;
            
            for(auto it : mp)
            {
                if(it.second > maxFreq)
                {
                    maxFreq = it.second;
                    maxFreqEle = it.first;
                }
            }
            
            str.push_back(maxFreqEle);
            mp.erase(maxFreqEle);
        }
    return str;
    }
};