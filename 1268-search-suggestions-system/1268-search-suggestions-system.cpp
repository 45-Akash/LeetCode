class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) 
    {
        vector<vector<string>>ans;
        for(int i=0; i<searchWord.length(); i++)
        {
            vector<string>str;
            string s = searchWord.substr(0,i+1);
            for(int j=0; j<products.size(); j++)
            {
                string sub = products[j].substr(0,i+1);
                // cout<<s<<" "<<sub<<endl;
                if(s==sub)
                {
                    str.push_back(products[j]);
                }
            }
            sort(str.begin(), str.end());
            vector<string>dummy;
            if(str.size()>=3)
            {
                for(int k=0; k<3; k++)    dummy.push_back(str[k]);
                ans.push_back(dummy);
            }
            else                          ans.push_back(str);
        }
    return ans;
    }
};