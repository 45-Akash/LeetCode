class Solution {
public:
    string interpret(string command)
    {
        char str[101]={};
        int slen = command.size();
        int j=0;
        for(int i=0; i<slen; i++)
        {
            if(command[i]=='G')
            {
                str[j++]='G';
            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                str[j++]='o';
                    i++;
            }
            else
            {
                str[j++]='a';
                str[j++]='l';
                i+=3;
            }
        }
    return str;
    }
};