class Solution {
public:
    string convert(string s, int numRows)
    {
        if(numRows==1)     return s;
        vector<vector<char>>ds(1001);
        int ind=0;
        int i=0;
        while(i<s.length())    
        {
            if(ind==0)
            {
                while(i<s.length() && ind<numRows)
                {
                    ds[ind++].push_back(s[i]);
                    i++;
                }
            }
            if(ind==numRows)
            {
                ind-=2;
                while(i<s.length() && ind>0)
                {
                    ds[ind--].push_back(s[i]);
                    i++;
                }
            }
        }
        
        string ans;
        for(int i=0; i<numRows; i++)
        {
            for(int j=0; j<ds[i].size(); j++)
            {
                ans+=ds[i][j];
            }
        }
    return ans;
    }
};