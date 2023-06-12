class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        int n = nums.size();
        vector<string>ans;
        
        for(int i=0; i<n; i++)
        {
            int start = nums[i];
            int end;
            
            while(i<n-1 && nums[i]+1 == nums[i+1])
            {
                end = nums[i+1];
                i++;
            }
            
            if(nums[i]==start)
            {
                ans.push_back(to_string(start));
            }
            else
            {
                string sub = "";
                sub += to_string(start);
                sub += "->";
                sub += to_string(end);
                ans.push_back(sub);
                
            }
        }
    return ans;
    }
};