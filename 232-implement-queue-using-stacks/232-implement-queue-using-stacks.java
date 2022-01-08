class MyQueue {
    
    Stack<Integer>st = new Stack<>();
    Stack<Integer>dummy = new Stack<>();
    public MyQueue() {
        
    }
    
    public void push(int x) {
        st.push(x);
    }
    
    public int pop() {
       while(st.size() != 0)
       {
           dummy.push(st.pop());
       }
        
        int ans = dummy.pop();
        while(dummy.size() != 0)
        {
            st.push(dummy.pop());
        }
        return ans;
    }
    
    public int peek() {
        while(st.size() != 0)
       {
           dummy.push(st.pop());
       }
        
        int ans = dummy.peek();
        while(dummy.size() != 0)
        {
            st.push(dummy.pop());
        }
        return ans;
    }
    
    public boolean empty() {
        if(st.size()==0)       return true;
        return false;
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */