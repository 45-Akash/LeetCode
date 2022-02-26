class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        // solve using two pointers method
        vector<int>vec;
        int start=0;
        int end=numbers.size()-1;
        
        while(start < end)
        {
            int sum = numbers[start]+numbers[end];
            if(sum == target)
            {
                vec.push_back(start+1);
                vec.push_back(end+1);
                break;
            }
            else if(sum < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
     return vec;
    }
};