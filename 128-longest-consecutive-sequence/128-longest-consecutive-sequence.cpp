class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        //TC O(n logn)
        if(nums.size()==0) return 0;  //corner case
        
        int maxLen=1;
        int seqLen=1;
        sort(nums.begin(), nums.end()); //sorting
        
        
        for(int i=1; i<nums.size(); i++)
        {
           //if two adjacent values helping to maintain a sequence
            if(nums[i]==nums[i-1]+1)  
            {
                seqLen++;
            }
            
            //if two adjacent values are equal then continue
            else if(nums[i]==nums[i-1])  continue;
            
            //if sequence breaks
            else
            {
                
                seqLen=1;
            }
            maxLen = max(maxLen,seqLen);
        }
        
       return maxLen; 
        
    }
};