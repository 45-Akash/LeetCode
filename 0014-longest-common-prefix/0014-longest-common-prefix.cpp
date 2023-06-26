class Solution {
public:
    string longestCommonPrefix(vector<string>& vec)
    {
      string s="";
        int flag=1;
        if(vec.size()==1)  return vec[0];
        for(int i=0; i<vec[0].size(); i++)
        {
            for(int j=1; j<vec.size(); j++)
            {
                flag=0;
                if(vec[j][i] != vec[0][i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                s = s+vec[0][i];
            }
            else
            {
                break;
            }
        }
        
        return s;
    }
};