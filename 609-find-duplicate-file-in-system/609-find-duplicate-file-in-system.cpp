class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) 
    {
        int n = paths.size();
        unordered_map<string,vector<string>> datafiles; 
        vector<vector<string>> ans;
        
        for(string path : paths)
        {  
            string dir="";
            string splitpath="";
            string data="";
            
            for(int i=0;i<path.length();i++)
            {
                if(path[i]=='(')
                {  
                    i++;
                    while(path[i]!=')')
                    {
                        data+=path[i];
                        i++;
                    }
                    datafiles[data].push_back(dir+'/'+splitpath);
                    data="";
                    
                }
                else if(path[i]==' ')
                { 
                    if(dir=="")
                    {
                        dir=splitpath;
                    }
                    splitpath="";
                }
                else
                {
                    splitpath+=path[i];
                }
            }
        }
        
        for(auto files : datafiles)
        {
            if(files.second.size()>1)
            {
                ans.push_back(files.second);
            }
        }
        return ans;

    }
};