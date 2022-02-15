class Solution {
public:
    int maxProduct(vector<string>& words)
    {
        int maxProduct = 0;
        string word_1,word_2;
        
        for(int i=0; i<words.size()-1; i++)
        {
            int len_1 = words[i].length();
            int len_2;
            set<char>st;
            for(auto it:words[i])      st.insert(it);
        
            for(int j=i+1; j<words.size(); j++)
            {
                len_2 = words[j].length();
                int check=0;
                    for(auto jt:words[j])
                    {
                        if(st.find(jt)!=st.end())    
                        {
                            check=1;
                            break;
                        }
                    } 
                
                if(check==0 && len_1*len_2 > maxProduct)      
                {
                    word_1=words[i];
                    word_2=words[j];
                    maxProduct=len_1*len_2;
                }
            }
          st.clear();  
        }
        // cout<<word_1<<" "<<word_2;
    return maxProduct;
    }
};