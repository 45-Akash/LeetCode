class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power)
    {
        int ans = 0;
        int n = tokens.size();
        
        sort(tokens.begin(), tokens.end());
        int score=0;
        int start=0, end=n-1;
        
        while(start<=end)
        {
            if(power>=tokens[start])
            {
                score++;
                power -= tokens[start];
                start++;
            }
            else if(score > 0)
            {
                score--;
                power += tokens[end];
                end--;
            }
            else 
            {
                break;
            }
            ans = max(ans, score);
        }
    return ans;
    }
};