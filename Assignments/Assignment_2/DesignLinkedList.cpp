class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
class MyLinkedList {
public:
    Node* head;
    int size;
    MyLinkedList() {
        this->head = NULL;
        this->size = 0;
    }

    int get(int index) {
        int idx = 0;
        if(index<0 || index>=size) return -1;
        Node* temp = head;
        while (idx < index) {
            idx++;
            temp = temp->next;
        }
        return temp->val;
    }

    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void addAtTail(int val) {
        Node* temp = new Node(val);
        if (size == 0){
            head = temp;
            size++;
            return;
        }
        Node* itr = head;
            while (itr ->next != NULL) {
                itr = itr->next;
            }
        itr->next = temp;
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index == 0){
            addAtHead(val);
        }
        else if (index == size){
            addAtTail(val);
        }
        else if (index >= 1 && index < size) {
            Node* temp = new Node(val);
            int idx = 0;
            Node* itr = head;
            while (idx < index-1) {
                idx++;
                itr = itr->next;
            }
            temp->next = itr->next;
            itr->next = temp;
            size++;
        }
        
    }

    void deleteAtIndex(int index) {
        // if (size == 0) return;
        if (index == 0){
            head = head->next;
            size--;
        }
        else if (index >= 1 && index < size) {
            int idx = 0;
            Node* itr = head;
            while (idx < index-1) {
                idx++;
                itr = itr->next;
            }
            itr->next = itr->next->next;
            size--;
        }
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */