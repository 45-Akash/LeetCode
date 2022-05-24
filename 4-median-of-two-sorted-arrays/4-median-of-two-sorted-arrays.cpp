class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int>vec;
        int m=nums1.size();
        int n=nums2.size();
        
        int mid=(m+n)/2;
        int i=0;
        int j=0;
        int count=-1;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                vec.emplace_back(nums1[i++]);
               
            }
            else if(nums1[i]>nums2[j])
            {
                vec.emplace_back(nums2[j++]);
                
            }
            else
            {
                vec.emplace_back(nums1[i++]); 
                vec.emplace_back(nums2[j++]);
                
                count++;
                if(count==mid && (m+n)%2==0)
                {
                    return (vec[mid-1]+vec[mid])/2.0;
                }
                else if (count==mid && (m+n)%2==1)
                {
                    return vec[mid];
                }
            }
            
            count++;
            if(count==mid && (m+n)%2==0)
            {
                return (vec[mid-1]+vec[mid])/2.0;
            }
            else if (count==mid && (m+n)%2==1)
            {
                return vec[mid];
            }
        }
        
        while(i<m)
        {
            vec.emplace_back(nums1[i]);
            i++;
            count++;
            if(count==mid && (m+n)%2==0)
            {
                return (vec[mid-1]+vec[mid])/2.0;
            }
            else if (count==mid && (m+n)%2==1)
                return vec[mid];
        }
        
        while(j<n)
        {
            vec.emplace_back(nums2[j]);
            j++;
            count++;
           
            if(count==mid && (m+n)%2==0)
            {
                return (vec[mid-1]+vec[mid])/2.0;
            }
            else if (count==mid && (m+n)%2==1)
                break;
        }
        
       return vec[mid]; 
    }
};