class RandomizedCollection {
public:
    vector<int>v;
    RandomizedCollection() {
        srand(time(NULL));
    }
    
    bool insert(int val) {
        auto it = lower_bound(v.begin(),v.end(),val);
        if(it != v.end() && *it == val){
            v.insert(it, val);
            return false;
        }
        v.insert(it, val);
        return true;
    }
    
    bool remove(int val) {
        auto it = lower_bound(v.begin(),v.end(),val);
        if(it != v.end() && *it == val){
            v.erase(it);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */