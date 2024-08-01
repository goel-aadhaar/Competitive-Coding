#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class HashMapLinearProbing {
private:
    vector<pair<int, int>> table;
    vector<bool> occupied;
    int capacity;

    int hash(int key) {
        return key % capacity;
    }

public:
    HashMapLinearProbing(int size) {
        capacity = size;
        table.resize(size, make_pair(-1, -1));
        occupied.resize(size, false);
    }

    void insert(int key, int value) {
        int index = hash(key);
        while (occupied[index]) {
            if (table[index].first == key) {
                table[index].second = value; // Update value if key already exists
                return;
            }
            index = (index + 1) % capacity;
        }
        table[index] = make_pair(key, value);
        occupied[index] = true;
    }

    bool find(int key) {
        int index = hash(key);
        int start = index;
        while (occupied[index]) {
            if (table[index].first == key) {
                return true;
            }
            index = (index + 1) % capacity;
            if (index == start) {
                break; // Full loop
            }
        }
        return false;
    }

    void remove(int key) {
        int index = hash(key);
        int start = index;
        while (occupied[index]) {
            if (table[index].first == key) {
                table[index] = make_pair(-1, -1);
                occupied[index] = false;
                return;
            }
            index = (index + 1) % capacity;
            if (index == start) {
                break; // Full loop
            }
        }
    }
};

int main() {
    HashMapLinearProbing hashmap(10);

    hashmap.insert(1, 100);
    hashmap.insert(2, 200);
    hashmap.insert(3, 300);

    cout << "Find 1: " << hashmap.find(1) << endl;
    cout << "Find 4: " << hashmap.find(4) << endl;

    hashmap.remove(2);
    cout << "Find 2 after removal: " << hashmap.find(2) << endl;

    return 0;
}
