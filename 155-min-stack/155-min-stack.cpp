class MinStack {
public:
    stack<int>Minstk;
    stack<int>Min;
    
    MinStack() 
    {
      
    }
    
    void push(int val) 
    {
        Minstk.push(val);
        if(Min.size()==0)
        {
            Min.push(val);
        }
        else if(val <= Min.top())
        {
            Min.push(val);
        }
        
    }
    
    void pop() 
    {
        int temp = Minstk.top();
        Minstk.pop();
        if(Min.top() == temp)
        {
            Min.pop();
        }
    }
    
    int top() 
    {
        return Minstk.top();    
    }
    
    int getMin()
    {
        return Min.top();    
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */