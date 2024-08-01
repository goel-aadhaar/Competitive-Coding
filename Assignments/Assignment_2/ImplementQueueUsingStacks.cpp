class MyQueue {
public:
    stack<int>st1;
    stack<int>st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st1.size()==1){
            int x = st1.top();
            st1.pop();
            return x;
        }
        while(st1.size() != 1){
            int x = st1.top();
            st2.push(x);
            st1.pop();
        }
        int y = st1.top();
        st1.pop();
        while(st2.size()){
            int x = st2.top();
            st1.push(x);
            st2.pop();
        }
        return y;
    }
    
    int peek() {
        if(st1.size()==1){
            int x = st1.top();
            return x;
        }
        while(st1.size() != 1){
            int x = st1.top();
            st2.push(x);
            st1.pop();
        }
        int y = st1.top();
        while(st2.size()){
            int x = st2.top();
            st1.push(x);
            st2.pop();
        }
        return y;
    }
    
    bool empty() {
        return st1.size() == 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */