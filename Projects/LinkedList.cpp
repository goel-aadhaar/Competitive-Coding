#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->next=NULL;
        this->data=data;
    }
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void insertAtEnd(int data){
        Node* temp = new Node(data);
        if(size==0)head = tail = temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtBeginning(int data){
        Node* temp = new Node(data);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAt(int idx,int data){
        if(idx<0 || idx>size){
            cout<<"Index Out Of Bounds!"<<'\n';
            return;
        }
        else if(idx==0)insertAtBeginning(data);
        else if(idx==size)insertAtEnd(data);
        else{
            Node* temp = new Node(data);
            Node* itr = head;
            for(int i=1;i<=idx-1;i++){
                itr=itr->next;
            }
            temp->next = itr->next;
            itr->next = temp;
        }
        size++;
    }
    void deleteAt(int idx){
        if(size==0){
            cout<<"List is Empty!"<<'\n';
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Index Out Of Bounds!"<<'\n';
            return;
        }
        else if(idx==0) deleteAtBeginning();
        else if(idx==size-1) deleteAtEnd();
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }
        size--;
    }
    void deleteAtBeginning(){
        if(size==0){
            cout<<"List is Empty!"<<'\n';
            return;
        }
        else if(size==1){
            head = tail = NULL;
        }
        else{
            head=head->next;
        }
        size--;
    }
    void deleteAtEnd(){
        if(size==0){
            cout<<"List is Empty!"<<'\n';
            return;
        }
        else if(size==1){
            head = tail = NULL;
        }
        else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            temp = tail;
        }
        size--;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    Node* rotateRight(Node* head, int k) {
        
        if(head == NULL) return NULL;
        else if(head->next == NULL) return head;
        Node* last = head;
        int len = 1;
        while(last->next!=NULL){
            last = last->next;
            len++;
        }
        
        k%=len;
        if(k==0) return head;
        int idx = len-k;idx--;
        Node* temp = head;
        Node* itr = head;
        while(idx--){
            temp = temp->next;
        }
        itr = temp->next;
        last->next = head;
        temp->next = NULL;
        head = itr;
        return head;
    }
    Node* reverse(Node* head){
        // Node* temp = head;
        if(!head || head->next)return head;
        Node* newHead = reverse(head->next);
        head->next=NULL;
        return newHead;
    }
    Node* mergeTwoLists(Node* list1, Node* list2) {
        Node* c = new Node(100);
        Node* temp = c;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                temp->next=list1;
                list1=list1->next;
                temp=temp->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
                temp=temp->next;
            }
        } 
        if(list1==NULL){
            temp->next=list2;
        }
        else if(list2==NULL){
            temp->next=list1;
        }
        return c->next;
    }
    Node* interleaveTwoLists(Node* list1, Node* list2) {
        Node* c = new Node(100);
        Node* temp = c;
        while(list1!=NULL && list2!=NULL){
                temp->next=list1;
                list1=list1->next;
                temp=temp->next;

                temp->next=list2;
                list2=list2->next;
                temp=temp->next;
        } 
        if(list1==NULL){
            temp->next=list2;
        }
        else if(list2==NULL){
            temp->next=list1;
        }
        return c->next;
    }
    Node* middleNode(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    int firstOccurence(Node* head,int x){
        int count=0;
        Node* temp =head;
        while(temp){
            if(temp->data==x)return count;
            count++;
            temp=temp->next;
        }
        return -1;
    }
}
int main()
{
    
    return 0;
}