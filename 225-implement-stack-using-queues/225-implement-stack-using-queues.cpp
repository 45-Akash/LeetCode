class MyStack {
public:
    
    deque<int>dec;
    MyStack() {
        
    }
    
    void push(int x) {
        dec.push_back(x);
    }
    
    int pop() {
        int val = dec[dec.size()-1];
        dec.pop_back();
        return val;
    }
    
    int top() {
        int val = dec[dec.size()-1];
        return val;
    }
    
    bool empty() {
        if(dec.size()==0)     return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */