class MyHashMap {
public:
    map<int,int>mp;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        if(value==0) mp[key] = -1;
        else         mp[key] = value;
    }
    
    int get(int key) {
        if(mp[key]==NULL)      return -1;
        if(mp[key]==-1)        return 0;
        return mp[key];
    }
    
    void remove(int key) {
        mp.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */