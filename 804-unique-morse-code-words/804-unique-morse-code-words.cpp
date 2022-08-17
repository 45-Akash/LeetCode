class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        int transformation =0;
        vector<string>code={".-","-...","-.-.","-..",".","..-.","--.","....","..",
                            ".---","-.-",".-..","--","-.","---",".--.",
                            "--.-",".-.","...","-","..-","...-",".--","-..-",
                            "-.--","--.."};
        unordered_set<string>new_word;
        
        string str;
        
        for(auto it : words)
        {
           str={};
            for(int i=0; i<it.size(); i++)
            {
                int index = int(it[i])-97;
               
                string temp = code[index];
                
               
                str = str + temp;
                
            }
            
            new_word.insert(str);
        }
        

        transformation = new_word.size();
        
//         for(int i=0; i<new_word.size(); i++)
//         {
//             int flag=0;
//             for(int j=i+1; j<new_word.size(); j++)
//             {
//                 if(new_word[i].compare(new_word[j])==0)
//                 {
//                     flag=1;
//                 }
//             }
            
//             if(flag==0)  transformation++;
//         }
        
        return transformation;
    }
};