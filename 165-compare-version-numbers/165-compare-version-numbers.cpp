class Solution {
public:
    string revisions(string str, string res, int i, int n)
    {
        while(i<n)
        {
            while(i<n && str[i]=='0')    i++;
            while(i<n && str[i]!='.')
            {
                res+=str[i];
                i++;
            }
            res += '.';
            i++;
        }
    return res;
    }
    void split(string s, int len, vector<long int>& v)
    {
        int i=0;
        while(i<len-1)
        {
            string sub="";
            while(i<len && s[i]!='.')
            {
                sub+=s[i];
                i++;
            }
            if(sub.length()!=0)
            {
                int val = stoi(sub);
                v.push_back(val);
            }
            else v.push_back(0);
            i++;
        }
    }
    int compareVersion(string version1, string version2)
    {
        int v1=version1.length();
        int i=0;
        string revision_1=revisions(version1, "", i, v1);
        
        int v2=version2.length();
        int j=0;
        string revision_2=revisions(version2, "", j, v2);
        
       
        cout<<revision_1<<" "<<revision_2<<endl;
        int l1 = revision_1.length();
        int l2 = revision_2.length();
        int flag=0;
        
        vector<long int>vec_1;
        split(revision_1, l1, vec_1);
        int d=0;
        i=vec_1.size()-1;
        while(i>=0 && vec_1[i]==0)      
        {
            d++;
            i--;
        }
        int v1Size=vec_1.size()-d;
        
        
        vector<long int>vec_2;
        split(revision_2, l2, vec_2);
        d=0;
        i=vec_2.size()-1;
        while(i>=0 && vec_2[i]==0)      
        {
            d++;
            i--;
        }
        int v2Size=vec_2.size()-d;
        
        
        if(v1Size < v2Size)
        {
            for(int i=0; i<v1Size; i++)
            {
                if(vec_1[i]!=vec_2[i])
                {
                    if(vec_1[i]<vec_2[i])     return -1;
                    return 1;
                }
            }
            return -1;
        }
        else if(v1Size > v2Size)
        {
            for(int i=0; i<v2Size; i++)
            {
                if(vec_1[i]!=vec_2[i])
                {
                    if(vec_1[i]<vec_2[i])     return -1;
                    return 1;
                }
            }
            return 1;
        }
        for(int i=0; i<v2Size; i++)
        {
            if(vec_1[i]!=vec_2[i])
            {
                if(vec_1[i]<vec_2[i])     return -1;
                return 1;
            }
        }
    return 0;
        
    }
};