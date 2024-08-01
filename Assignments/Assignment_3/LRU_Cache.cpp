#include <iostream>
#include <unordered_map>
using namespace std;

class LRUCache {
private:
    struct Node {
        int key, value;
        Node* prev;
        Node* next;
        Node(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
    };

    unordered_map<int, Node*> cache;
    Node* head;
    Node* tail;
    int capacity;
    int size;

    void moveToHead(Node* node) {
        removeNode(node);
        addToHead(node);
    }

    void removeNode(Node* node) {
        if (node->prev) {
            node->prev->next = node->next;
        } else {
            head = node->next;
        }
        if (node->next) {
            node->next->prev = node->prev;
        } else {
            tail = node->prev;
        }
    }

    void addToHead(Node* node) {
        node->next = head;
        node->prev = nullptr;
        if (head) {
            head->prev = node;
        }
        head = node;
        if (!tail) {
            tail = head;
        }
    }

    Node* removeTail() {
        Node* node = tail;
        removeNode(node);
        return node;
    }

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        head = nullptr;
        tail = nullptr;
    }

    int get(int key) {
        if (cache.find(key) == cache.end()) {
            return -1;
        }
        Node* node = cache[key];
        moveToHead(node);
        return node->value;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            node->value = value;
            moveToHead(node);
        } else {
            Node* newNode = new Node(key, value);
            cache[key] = newNode;
            addToHead(newNode);
            ++size;
            if (size > capacity) {
                Node* tail = removeTail();
                cache.erase(tail->key);
                delete tail;
                --size;
            }
        }
    }
};

int main() {
    LRUCache lruCache(2);

    lruCache.put(1, 1);
    lruCache.put(2, 2);
    cout << "Get 1: " << lruCache.get(1) << endl; // returns 1
    lruCache.put(3, 3); // evicts key 2
    cout << "Get 2: " << lruCache.get(2) << endl; // returns -1 (not found)
    lruCache.put(4, 4); // evicts key 1
    cout << "Get 1: " << lruCache.get(1) << endl; // returns -1 (not found)
    cout << "Get 3: " << lruCache.get(3) << endl; // returns 3
    cout << "Get 4: " << lruCache.get(4) << endl; // returns 4

    return 0;
}
