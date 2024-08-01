class CustomStack {
public:
    vector<int>v;
    int i=0;
    CustomStack(int maxSize) {
        v.resize(maxSize);
    }
    
    void push(int x) {
        if(i<v.size()){
            v[i]=x;
            i++;
        }
    }
    
    int pop() {
        i--;
        if(i == -1) {
            i++;
            return -1;
        }
        else{
            int x = v[i];
            return x;
        }
    }
    
    void increment(int k, int val) {
        int j=0;
        while(j<i && k--){
            v[j]+=val;
            j++;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */