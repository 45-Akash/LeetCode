class Solution {
public:
   
    unordered_map<string, bool> check;
    
    bool palin(string &s)
    {
        if(check.find(s) != check.end())
            return check[s];
        
        if(s.length() == 0){
            check[s] = true;
            return true;
        }
        int n = s.length();
        for(int i = 0; i <= n/2; i++)
        {
            if(s[i] != s[(n - i) - 1])
            {
                check[s] = false;
                return false;
            }
        }
        check[s] = true;
        return true;    
    }
    
    vector<vector<int>> palindromePairs(vector<string>& words) {
        
        unordered_map<string, int> mp;
        vector<vector<int>> ans;
        
        for(int i = 0 ; i < words.size(); i++)
        {
            string str = words[i];
            reverse(str.begin(), str.end());
            mp[str] = i;
        }
        
        if(mp.find("") != mp.end())
        {
            for(int i = 0; i < words.size(); i++)
            {
                if(i == mp[""])
                    continue;
                if(palin(words[i]))
                {
                    ans.push_back({i, mp[""]});
                }
            }
        }
        
        for(int i = 0 ; i < words.size(); i++)
        {
           
            string right = words[i];
            string left = "";
            
            for(int j = 0 ; j < words[i].length(); j++)
            {
                left.push_back(words[i][j]);
                right.erase(right.begin() + 0);
                if(mp.find(left) != mp.end() and palin(right) and mp[left] != i)
                    ans.push_back({i, mp[left]});
                
                if(mp.find(right) != mp.end() and palin(left) and mp[right] != i)
                    ans.push_back({mp[right], i});
            }
        }
       
        return ans;
    }
};