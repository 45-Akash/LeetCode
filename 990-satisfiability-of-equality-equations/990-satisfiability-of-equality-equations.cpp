int find(vector<int>& parent, int i)
{
    if (parent[i] == -1)
        return i;
    return find(parent, parent[i]);
}
  
void Union(vector<int>& parent, int x, int y)
{ if(x==y) return ;
    parent[x] = y;
}
bool comp(string& a,string& b)
{
    if(a[1]=='!') return 0;
     if(b[1]=='!')   return 1;
    return 0;
  }

class Solution {
public:
    
    
    bool equationsPossible(vector<string>& equation) 
    {
        sort(equation.begin(),equation.end(),comp);
        vector<int> parent(26,-1);
        
        for(int i=0;i<equation.size();i++)
        {
           
            if(equation[i][1]=='=')
            {
                 
                 
                 int x=find(parent,equation[i][0]-'a');
                 int y=find(parent,equation[i][3]-'a');
                 
                Union(parent,x,y);
                
            }
            else
            {
                 int x=find(parent,equation[i][0]-'a');
                 int y=find(parent,equation[i][3]-'a');
                
                if( x==y) return 0;
             }
            
        }
        
        return 1;
    }
};