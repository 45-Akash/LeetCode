class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k)
    {
        sort(arr.begin(), arr.end());
        vector<int>ans;
        int n=arr.size();
        int median=(n-1)/2;
        int medVal = arr[median];
        
        int s=0;
        int e=n-1;

        while(s<=e)
        {
            k--;
            if(abs(arr[s]-medVal) == abs(arr[e]-medVal))
            {
                if(arr[s]>arr[e])     
                {
                    ans.push_back(arr[s]); 
                    s++;
                }
                else 
                {
                    ans.push_back(arr[e]);
                    e--;
                }
            }
            else if(abs(arr[s]-medVal) > abs(arr[e]-medVal))
            {
                ans.push_back(arr[s]);
                s++;
            }
            else
            {
                ans.push_back(arr[e]);
                e--;
            }    
            if(k==0)   break;
        }
    return ans;
    }
};