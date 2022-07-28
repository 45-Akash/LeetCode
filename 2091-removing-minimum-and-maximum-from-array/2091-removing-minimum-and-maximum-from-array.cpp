class Solution {
public:
    int minimumDeletions(vector<int>& nums)
    {
        int n = nums.size();
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        int miniFromBeg=0, maxiFromBeg=0, miniFromEnd=0, maxiFromEnd=0;
        
        int miniOp = INT_MAX;
        int count=0, f1=0, f2=0, m=0, M=0;
        for(int i=0; i<n; i++)
        {
            count++;
            if(m==0)
            {
                miniFromBeg++;
            }
            if(M==0)
            {
                maxiFromBeg++;
            }
            
            
            if(nums[i] == mini) 
            {
                f1=1;
                m=1;
            }
            if(nums[i] == maxi) 
            {
                f2=1;
                M=1;
            }
            
            if(f1==1 && f2==1)   break;
        }
     
        miniOp = min(miniOp, count);
        count=0;
        f1=0;
        f2=0;
        m=0;
        M=0;
        for(int i=n-1; i>=0; i--)
        {
            count++;
            if(m==0)
            {
                miniFromEnd++;
            }
            if(M==0)
            {
                maxiFromEnd++;
            }
            if(nums[i] == mini) 
            {
                f1=1;
                m=1;
            }
            if(nums[i] == maxi) 
            {
                f2=1;
                M=1;
            }
            
            if(f1==1 && f2==1)   break;
        }
        
        miniOp = min(miniOp, count);
        int comb_1 = miniFromBeg + maxiFromEnd;
        cout<<comb_1<<endl;
        int comb_2 = maxiFromBeg + miniFromEnd;
       
        miniOp = min(miniOp, min(comb_1, comb_2));
        return miniOp;
   
    }
};