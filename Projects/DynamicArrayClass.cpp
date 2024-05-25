#include <iostream>
#include <stdexcept>
using namespace std;

class Darray {
    public:
    int* arr;
    int size;
    int capacity;

    Darray(int initialCapacity = 4) : size(0), capacity(initialCapacity) {
        arr = new int[capacity];
    }

    ~Darray() {
        delete[] arr;
    }

    int getSize() {return size;}

    void doubleSize(int size) {
        int* array = new int[size*2];
        for(int i =0;i <size;i++) array[i] =arr[i];

        delete[] arr;
        arr =array;
        capacity =size*2;
    }
    void insertAtIdx(int idx,int data) {
        if (idx<0 || idx>size) throw out_of_range("Index out of Bounds!!!");
        if (size == capacity) doubleSize(size);
        for(int i =size;i>idx;i--) arr[i] =arr[i-1];
        arr[idx]= data;
        size++;
    }
    void deleteAtIdx(int idx) {
        if (idx < 0 || idx >= size) throw out_of_range("Index out of Bounds!!!");
        for(int i=idx;i<size -1;i++) arr[i]= arr[i+1];
        size--;
    }
    bool isEmpty() {return size==0;}

    void reverse(int start,int end) {
        while (start<end) {
            swap(arr[start], arr[end]);
            start++;end--;
        }
    }
    void rotate(int n){
        if (size == 0)return;
        n %= size;
        if(n<0)n +=size;
        reverse(0,size -1);
        reverse(0,n -1);
        reverse(n,size -1);
    }
    void insertAtEnd(int data) {insertAtIdx(size,data);}

    void insertAtBeginning(int data){insertAtIdx(0, data);}

    void merge(int* brr, int b_size) {
        int newSize = size+b_size;

        int* crr =new int[newSize];
        int i =0,j =0,count =0;
        while (i<size && j<b_size) {
            if(arr[i]<brr[j]) crr[count++] =arr[i++];
            else crr[count++] =brr[j++];
        }

        while(i<size) crr[count++] =arr[i++];
        while(j<b_size) crr[count++]=brr[j++];

        delete[] arr;
        arr =crr;
        size =newSize;
        capacity =newSize;
    }
    void interLeave(int* brr,int b_size) {
        int newSize =size + b_size;

        int* crr = new int[newSize];
        int i =0,j =0,count =0;
        while(i<size && j<b_size) {
            crr[count++] =arr[i++];
            crr[count++] =brr[j++];
        }

        while (i <size) crr[count++] =arr[i++];
        while(j <b_size) crr[count++] =brr[j++];

        delete[] arr;
        arr = crr;
        size = newSize;
        capacity = newSize;
    }
    int middle(){
        if(size==0) throw out_of_range("Array is empty");
        else if(size==1)return arr[0];
        else return arr[size/2];
    }
    int firstOccurrence(int data){
        for(int i =0;i <size;i++) if(arr[i]==data) return i;
        return -1;
    }
    void print(){
        for(int i =0;i<size;i++) cout<<arr[i]<<" ";
        cout << endl;
    }
};

int main() {
    Darray aadhaar;
    aadhaar.insertAtBeginning(37);
    aadhaar.insertAtEnd(4);
    aadhaar.print();
    cout<<aadhaar.middle()<<endl;
    int vrr[5] ={1,2,3,4,5};
    aadhaar.merge(vrr,5);
    aadhaar.print();
    int drr[5] ={6,7,8,9,0};
    aadhaar.interLeave(drr,5);
    aadhaar.print();
    return 0;
}