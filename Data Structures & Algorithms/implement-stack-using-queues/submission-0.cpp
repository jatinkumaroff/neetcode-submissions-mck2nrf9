class MyStack {
   public:
    queue<int> st;
    MyStack() {}

    void push(int n) {
        queue<int> helper;
        while (!st.empty()) {
            int x = st.front();
            st.pop();
            helper.push(x);
        }
        st.push(n);
        while (!helper.empty()) {
            int x = helper.front();
            helper.pop();
            st.push(x);
        }
    }

    int pop() {
        int x=st.front();
        st.pop();
        return x;
    }

    int top() {
        return st.front();
    }

    bool empty() {
        return st.empty();
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