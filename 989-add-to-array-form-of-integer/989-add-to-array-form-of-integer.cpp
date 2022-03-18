class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k)
    {
        vector<int>v;
        while(k!=0)
        {
            v.push_back(k%10);
            k/=10;
        }
        
        int carry=0;
        int n = num.size();
        int m = v.size();
        int i=0,j=0;
        reverse(num.begin(), num.end());
        vector<int>ans;
        
        while(i<n || j<m || carry!=0)
        {
            int sum=0;
            if(i<n)
            {
                sum += num[i];
            }
            if(j<m)
            {
                sum += v[j++];
            }
            sum += carry;
            ans.push_back(sum%10);
            carry = sum/10;
            i++;
        }
        reverse(ans.begin(), ans.end());
       
    return ans;
    }
};