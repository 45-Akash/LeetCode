class Solution {
public:
    
    void solve(string digits, int ind, vector<string>&ans, unordered_map<int,string>mp, string op)
    {
        if(ind >= digits.length())
        {
            ans.push_back(op);
            return;
        }
        
        int num = digits[ind]-'0';
        string str = mp[num];
        
        for(int i=0; i<str.length(); i++)
        {
            //add one char from the button num at every time and move for next button
            op += str[i];
            solve(digits, ind+1, ans, mp, op);
            
            //backtracking .... remove previously added char to try diff char of same num
            op.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        unordered_map<int,string>mp;
        vector<string>ans;
        if(digits.size()==0)        return ans;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        
        solve(digits, 0, ans, mp, "");
        return ans;
    }
};