class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int count=0;
        unordered_map<char, int>mp;
        
        // cout<<<<endl;
        for(int i=0; i<allowed.length(); i++)  mp[allowed[i]]++;
        // for(auto it:mp)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        
        for(auto it:words)
        {
            int f=1;
           
            for(int i=0; i<it.length(); i++)
            {
                
                if(mp[it[i]]==0)
                {
                    f=0;
                    break;
                }
            }
            // cout<<tmp.size()<<" "<<mp.size()<<" "<<f<<endl;
            if(f==1) count++;
        }
    return count;
    }
};