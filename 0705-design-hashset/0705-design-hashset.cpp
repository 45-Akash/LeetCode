class MyHashSet {
public:
    /* Algorithm :-
        step 1:- initialize a vector of size 1000001 with 0
        step 2:- If add is there then make vector[key]=1
        step 3:-If we have to remove the key from set make vac[key]=0
        step 4:- return vec[key]
                 if key==1 , return true , element present
                 if key==0 , return false , element absent
     */
    vector<int>vec;
    int size;
    
    MyHashSet() {
        size=1e6+1;
        vec.resize(size);
        
    }
    
    void add(int key) {
        vec[key]=1;
        
    }
    
    void remove(int key) {
        vec[key]=0;
    }
    
    bool contains(int key) {
        return vec[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */