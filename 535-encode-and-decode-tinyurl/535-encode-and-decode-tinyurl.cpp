class Solution {
public:
    
    unordered_map<string,string>mp;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        
        string org = longUrl;
        int len=org.length()-1;
        
        int i=len;
        while(i>=0 && longUrl[i]!='/')
        {
            longUrl.pop_back();
            i--;
        }
        
        mp[org]=longUrl;
        return longUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string longUrl;
        
        for(auto it:mp)
        {
            if(it.second==shortUrl) 
            {
                longUrl=it.first;
                break;
            }
        }
        return longUrl;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));