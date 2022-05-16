class Solution {
public:
    
    long long int makeNum(vector<int>v)
    {
        long long int num = 0;
        
        for(int i=0; i<v.size(); i++)
        {
            num = (num*10)+v[i];
        }
        return num;
    }
    
    bool check(long long int num)
    {
        int ind=0;
        
        while(pow(2,ind)<=num)
        {
            // cout<<pow(2,ind)<<" "<<num<<endl;
            if(pow(2,ind)==num)    return true;
            ind++;
        }
    return false;
    }
    
    bool reorderedPowerOf2(int n)
    {
        vector<int>vec;
        
        while(n!=0)
        {
            vec.push_back(n%10);
            n/=10;
        }
        
        sort(vec.begin(), vec.end());
        
        do{
            if(vec[0]!=0)
            {
                long long int num = makeNum(vec);
                // cout<<num<<"-----------------"<<endl;
                if(check(num))
                {
                    return true;
                }
            }
        }while(next_permutation(vec.begin(), vec.end()));
    return false;
    }
};