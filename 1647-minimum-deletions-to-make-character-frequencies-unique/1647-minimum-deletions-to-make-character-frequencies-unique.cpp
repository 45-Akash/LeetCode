class Solution {
public:
    int minDeletions(string s) 
    {
        int n=s.length();
        int count=0;
        
        unordered_map<char, int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        
        multiset<int>frequencies;
        // for(auto it:mp)         frequencies.insert(it.second);
        
        int f=0;
        while(mp.size())
        {
            int min_freq=INT_MAX;
            char ch;
            for(auto it: mp)
            {
                if(it.second<min_freq)
                {
                    min_freq=it.second;
                    ch=it.first;
                }
            }
            
            if(f)
            {
                int freq=min_freq;
                while(freq)
                {
                    if(frequencies.find(freq)==frequencies.end())
                    {
                        count += (min_freq-freq);
                        frequencies.insert(freq);
                        // cout<<count<<endl;
                        break;
                    }
                    freq--;
                }

                if(freq==0)  count+=min_freq;
                // if(freq)     frequencies.erase(frequencies.find(min_freq));
            }
            
            mp.erase(ch);
            if(f==0)        frequencies.insert(min_freq);
            f=1;
        }
    return count;
    }
};