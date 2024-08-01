class StockSpanner {
public:
    stack<pair<int,int>>st;
    int idx = 0;

    StockSpanner() {
        
    }
    
    int next(int price) {
        int span =1;
        while(!st.empty() && st.top().first <= price) st.pop();
        if(!st.empty())span += idx - st.top().second - 1;
        else span += idx;
        st.push({price , idx});
        idx++;
        return span;

    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */