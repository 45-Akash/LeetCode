class Solution {
public:
    
    
    string frequencySort(string s)
    {
        unordered_map<char,int>mp;
        //calculate frequency of characters
        for(int i=0; i<s.size(); i++)    mp[s[i]]++;
        
        char ch;
        string str="";
        int size = mp.size();
        
         while(size--)
         {
             //find character having max frequency
             int max=INT_MIN;
             for(auto it:mp)
             {
                 if(it.second > max)
                 {
                     max=it.second;
                     ch=it.first;
                 }
             }
             
             //append max frequency character to str for theire number of                      frequency times 
             int iter=mp[ch];
             while(iter--)
             {
                 str += ch;
             }
             
             mp.erase(ch); //once the character the concatenated to string erase                              it from map
         }
        
      return str;  
        
        
    }
};