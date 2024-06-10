class RandomizedSet {
public:
    vector<int>v;
    RandomizedSet() {
        srand(time(NULL));
    }
    
    bool insert(int val) {
        auto it = lower_bound(v.begin(), v.end(), val);

        if(it != v.end() && *it == val) return false;
        v.insert(it,val);
        return true;
    }
    
    bool remove(int val) {
        auto it = lower_bound(v.begin(), v.end(), val);

        if(it != v.end() && *it == val) {
            v.erase(it);
            return true;
        }
        return false;
    }
    
    int getRandom(){
        int random_number;
        
        random_number = rand() % (v.size());
        return v[random_number];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */