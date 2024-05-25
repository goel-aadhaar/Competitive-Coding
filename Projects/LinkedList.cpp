#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this->next = NULL;
        this->data = data;
    }
};

class LinkedList {
    public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void insertAtEnd(int data) {
        Node* temp = new Node(data);
        if(size ==0)head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtBeginning(int data) {
        Node* temp =new Node(data);
        if(size ==0)head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAt(int idx,int data) {
        if(idx<0 || idx>size) {
            cout<<"Index Out Of Bounds!"<<'\n';
            return;
        } 
        else if(idx ==0)insertAtBeginning(data);
        else if(idx ==size) insertAtEnd(data);
        else {
            Node* temp = new Node(data);
            Node* itr = head;
            for (int i =1;i<=idx-1;i++) itr = itr->next;
            temp->next = itr->next;
            itr->next = temp;
            size++;
        }
    }
    void deleteAt(int idx) {
        if(size ==0) {
            cout<<"List is Empty!"<<'\n';
            return;
        } 
        else if(idx<0 || idx>=size) {
            cout<<"Index Out Of Bounds!"<<'\n';
            return;
        } 
        else if(idx==0) deleteAtBeginning();
        else if(idx== size-1) deleteAtEnd();
        else {
            Node* temp = head;
            for (int i =1;i<= idx-1;i++) temp = temp->next;
            temp->next = temp->next->next;
            size--;
        }
    }
    void deleteAtBeginning() {
        if(size ==0) {
            cout<<"List is Empty!"<<'\n';
            return;
        } 
        else if(size==1)head = tail = NULL;
        else {
            Node* temp = head;
            head = head->next;
        }
        size--;
    }
    void deleteAtEnd() {
        if(size==0){
            cout<<"List is Empty!"<<'\n';
            return;
        } 
        else if(size ==1) head = tail = NULL;
        else{
            Node* temp = head;
            while(temp->next != tail) temp = temp->next;
            tail = temp;
            tail->next = NULL;
        }
        size--;
    }
    int getSize() {return size;}

    bool isEmpty() {return size==0;}

    Node* rotateRight(Node* head, int k) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        Node* last = head;
        int len =1;
        while (last->next != NULL) {
            last = last->next;
            len++;
        }

        k%=len;
        if(k ==0) return head;
        int idx = len - k - 1;
        Node* temp = head;
        for(int i = 0; i < idx; i++) {
            temp = temp->next;
        }
        Node* newHead = temp->next;
        temp->next = NULL;
        last->next = head;
        return newHead;
    }
    Node* reverse(Node* head) {
        if(!head || !head->next)return head;
        Node* rest = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }
    Node* mergeTwoLists(Node* list1, Node* list2) {
        Node* c = new Node(100);
        Node* temp = c;
        while(list1!=NULL && list2!=NULL) {
            if(list1->data <= list2->data) {
                temp->next = list1;
                list1 = list1->next;
            } 
            else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if(list1!=NULL) temp->next = list1;
        if(list2!=NULL) temp->next = list2;

        return c->next;
    }
    Node* interleaveTwoLists(Node* list1, Node* list2) {
        Node* c = new Node(100);
        Node* temp = c;
        while(list1!=NULL && list2!=NULL) {
            temp->next = list1;
            list1 = list1->next;
            temp->next = list2;
            list2 = list2->next;
            temp = temp->next;
        }
        if(list1!=NULL) temp->next = list1;
        if(list2!=NULL) temp->next = list2;

        return c->next;
    }
    Node* middleNode(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    int firstOccurrence(Node* head, int x) {
        int count = 0;
        Node* temp = head;
        while (temp) {
            if (temp->data == x) return count;
            count++;
            temp = temp->next;
        }
        return -1;
    }
    void print(){
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtBeginning(500);
    ll.insertAt(0,5);
    ll.insertAtEnd(50);
    
    ll.print();

    return 0;
}