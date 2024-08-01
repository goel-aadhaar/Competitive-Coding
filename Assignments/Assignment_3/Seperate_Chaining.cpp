#include <iostream>
#include <list>
#include <vector>
#include <utility>

using namespace std;

class HashMapSeparateChaining {
private:
    vector<list<pair<int, int>>> table;
    int capacity;

    int hash(int key) {
        return key % capacity;
    }

public:
    HashMapSeparateChaining(int size) {
        capacity = size;
        table.resize(size);
    }

    void insert(int key, int value) {
        int index = hash(key);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                pair.second = value; // Update value if key already exists
                return;
            }
        }
        table[index].emplace_back(key, value);
    }

    bool find(int key) {
        int index = hash(key);
        for (const auto& pair : table[index]) {
            if (pair.first == key) {
                return true;
            }
        }
        return false;
    }

    void remove(int key) {
        int index = hash(key);
        for (auto it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->first == key) {
                table[index].erase(it);
                return;
            }
        }
    }
};

int main() {
    HashMapSeparateChaining hashmap(10);

    hashmap.insert(1, 100);
    hashmap.insert(2, 200);
    hashmap.insert(3, 300);

    cout << "Find 1: " << hashmap.find(1) << endl;
    cout << "Find 4: " << hashmap.find(4) << endl;

    hashmap.remove(2);
    cout << "Find 2 after removal: " << hashmap.find(2) << endl;

    return 0;
}
