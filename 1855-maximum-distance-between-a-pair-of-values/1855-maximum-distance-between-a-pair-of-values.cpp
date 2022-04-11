class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2)
    {
        int max_len=INT_MIN;
        int ans=0;
        int j=nums2.size();
        
        for(int i=0; i<nums1.size(); i++)
        {
            if(i<nums2.size())
            {
                int val=nums1[i];
                int s=i,e=nums2.size()-1;
                int value=i;
                
                while(s<=e)
                {
                    int mid = s+(e-s)/2;
                    if(val<=nums2[mid])
                    {
                        s = mid+1;
                        value = mid;   
                    }
                    else
                    {
                        e = mid-1;
                    }
                } 
                ans = max(ans, value-i);
            }
        }
    return ans;
    }
};