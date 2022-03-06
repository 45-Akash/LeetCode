class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        int len = nums.size();
        int size = 1;
        
        for(int i=1; i<=len; i++)     //factorial to find possible number of                                             permutations
        {
            size *= i;
        }
        
        sort(nums.begin(), nums.end());     //sort the original nums
        
        vector<vector<int>>vec(size,vector<int>());  //2D vector memory                                                                allocation
        int j=0;
        
        do{                                   //using STL find all permutations
            for(int i=0; i<nums.size(); i++)
            {
                vec[j].push_back(nums[i]);
            
            }
            j++;
        }while(next_permutation(nums.begin(), nums.end()));
        
        return vec;
        
    }
};