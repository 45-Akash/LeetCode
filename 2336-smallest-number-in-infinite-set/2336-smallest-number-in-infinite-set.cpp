class SmallestInfiniteSet {
public:
    vector<int>v;
    priority_queue<int, vector<int>, greater<int>>pq;
    SmallestInfiniteSet() {
        v.resize(10001, -1);
        for(int i=1; i<=10001; i++)    pq.push(i);
    }
    
    int popSmallest() {
        int small = pq.top();
        pq.pop();
        v[small]=1;
        return small;
        
    }
    
    void addBack(int num) {
        if(v[num]==1) 
        {
            v[num]=-1;
            pq.push(num);
        }
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */