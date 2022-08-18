class Solution {
public:
    int minSetSize(vector<int>& arr)
    {
        int size=arr.size();
        unordered_map<int,int>mp;
        multiset<int>st;
        vector<int>vec;
        int count=0;
        
        sort(arr.begin(), arr.end());
        
        for(auto &it : arr)   mp[it]++;
        
        for(auto &it : mp)    st.insert(it.second);
      
        for(auto &it : st)    vec.push_back(it);
           
        
        size/=2;
        int delete_size=0;
        
        for(auto it=vec.rbegin(); it!=vec.rend(); it++)
        {
            count++;
            delete_size += *it;
            if(delete_size >= size) break;
        }
     
     return count;   
        
    }
};