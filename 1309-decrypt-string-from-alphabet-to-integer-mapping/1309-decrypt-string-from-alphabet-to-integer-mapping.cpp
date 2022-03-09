class Solution {
public:
    string freqAlphabets(string s) {
        int i=s.length()-1;
        string output="";
        while(i>=0)
        {
            if(s[i]!='#' && (s[i]>='1' && s[i]<='9'))
            {
                output+=(s[i]+48); 
                i-=1;
            }
            else 
            {
                int temp=10*(s[i-2]-'0')+(s[i-1]-'0')-1;
                output+=('a'+temp);
                i-=3;
            }
        }
        reverse(output.begin(),output.end());
        return output;
    }
};