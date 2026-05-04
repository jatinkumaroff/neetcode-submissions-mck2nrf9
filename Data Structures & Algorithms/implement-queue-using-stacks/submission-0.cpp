class MyQueue {
public:
stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> helper;
        while(!st.empty()){
            helper.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!helper.empty()){
            st.push(helper.top());
            helper.pop();
        }
    }
    
    int pop() {
        int x= st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */