class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int>vec;
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i=0,j=0;
        int e1=nums1.size();
        int e2=nums2.size();
        
        while(i<e1 && j<e2)
        {
           if(nums1[i]==nums2[j]) 
           {
               vec.push_back(nums1[i]);
               i++;
               j++;
           }
           else if(nums1[i]<nums2[j])       i++;
           else                             j++;
        }
    
        return vec;
    }
};