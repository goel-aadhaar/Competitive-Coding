class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if(q1.size()==1){
            int x = q1.front();
            q1.pop();
            return x;
        }
        int x;
        while(q1.size()!=1){
            x = q1.front();
            q1.pop();
            q2.push(x);
        }
        int y = q1.front();
        q1.pop();
        while(q2.size()){
            int x = q2.front();
            q1.push(x);
            q2.pop();
        }
        return y;

    }
    
    int top() {
        if(q1.size()==1){
            return q1.front();
        }
        int x;
        while(q1.size()){

            x = q1.front();
            q1.pop();
            q2.push(x);
        }
        while(q2.size()){
            int x = q2.front();
            q2.pop();
            q1.push(x);
        }
        return x;
    }
    
    bool empty() {
        return q1.size() == 0;
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