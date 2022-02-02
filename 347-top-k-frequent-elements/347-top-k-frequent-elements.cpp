class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        vector<int>vec;
        map<int,int>Cfreq;
        int key;
        
        //For calculating the frequencies
        for(int i=0; i<nums.size(); i++) Cfreq[nums[i]]++;
       
        //loop for finding k number of elements which have maximum frequency
        while(k--)                  
        {
            int max=INT_MIN;
            //To find key for which freq is maximum
            for(auto it : Cfreq)
            {
                if(it.second > max)   
                {
                    max = it.second;
                    key = it.first;
                }
            }
            
            vec.emplace_back(key);   // storing key in vector
            Cfreq.erase(key);        // once the job of perticular key is done
                                     // then erase it from map
            
        }
      return vec; 
        
    }
};