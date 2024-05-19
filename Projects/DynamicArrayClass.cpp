#include <iostream>
#include <stdexcept>
#include <vector>
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

    int getSize() {
        return size;
    }

    void doubleSize(int size) {
        int* array = new int[size * 2];
        for (int i = 0; i < size; i++) {
            array[i] = arr[i];
        }
        delete[] arr;
        arr = array;
        capacity = size * 2;
    }

    void insertAtIdx(int idx, int data) {
        if (idx < 0 || idx > size) {
            throw out_of_range("Index out of Bounds!!!");
        }
        if (size == capacity) {
            doubleSize(size);
        }
        for (int i = size; i > idx; i--) {
            arr[i] = arr[i - 1];
        }
        arr[idx] = data;
        size++;
    }

    void deleteAtIdx(int idx) {
        if (idx < 0 || idx >= size) {
            throw out_of_range("Index out of Bounds!!!");
        }
        for (int i = idx; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    bool isEmpty() {
        return size == 0;
    }

    void reverse(int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void rotate(int n) {
        if (size == 0) return;
        n %= size;
        if (n < 0) n += size;
        reverse(0, size - 1);
        reverse(0, n - 1);
        reverse(n, size - 1);
    }

    void append(int data) {
        insertAtIdx(size, data);
    }

    void prepend(int data) {
        insertAtIdx(0, data);
    }

    void merge(int* brr, int b_size) {
        int newSize = size + b_size;
        while (capacity < newSize) {
            doubleSize(size);
        }

        int crr[size+b_size];
        int i = 0, j = 0;int count=0;
        while (i < size && j < b_size) {
            if (arr[i] < brr[j]) {
                crr[count]=arr[i];count++;
                i++;
            } else {
                crr[count]=brr[i];count++;
                j++;
            }
        }

        while (i < size) {
            crr[count]=arr[i];count++;
            i++;
        }
        while (j < b_size) {
            crr[count]=brr[i];count++;
            j++;
        }

        size = crr.size();
        for (int k = 0; k < size; k++) {
            arr[k] = crr[k];
        }
    }

    void interLeave(int* brr, int b_size) {
        int crr[size+b_size];
        int i = 0, j = 0;int count=0;
        while (i < size && j < b_size) {
            crr[count]=arr[i];count++;
            i++;
            crr[count]=brr[i];count++;
            j++;
        }

        while (i < size) {
            crr[count]=arr[i];count++;
            i++;
        }
        while (j < b_size) {
            crr[count]=brr[i];count++;
            j++;
        }

        while (capacity < crr.size()) {
            doubleSize(size);
        }

        size = crr.size();
        for (int k = 0; k < size; k++) {
            arr[k] = crr[k];
        }
    }

    int middle() {
        if (size == 0) {
            throw out_of_range("Array is empty");
        }
        return arr[size / 2];
    }

    int firstOccurrence(int data) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == data) return i;
        }
        return -1;
    }

    void print() const {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Darray arr;
    arr.append(1);
    arr.append(2);
    arr.append(3);
    arr.append(4);
    arr.append(5);

    cout << "Array: ";
    arr.print();

    arr.insertAtIdx(2, 10);
    cout << "After inserting 10 at index 2: ";
    arr.print();

    arr.deleteAtIdx(3);
    cout << "After removing element at index 3: ";
    arr.print();

    cout << "Size: " << arr.getSize() << endl;
    cout << "Is empty: " << (arr.isEmpty() ? "Yes" : "No") << endl;

    arr.rotate(2);
    cout << "After rotating by 2 positions: ";
    arr.print();

    arr.reverse(0, arr.getSize() - 1);
    cout << "After reversing: ";
    arr.print();

    arr.prepend(0);
    cout << "After prepending 0: ";
    arr.print();

    int arr2[] = {6, 7, 8};
    arr.merge(arr2, 3);
    cout << "After merging with [6, 7, 8]: ";
    arr.print();

    int arr3[] = {9, 10, 11};
    arr.interLeave(arr3, 3);
    cout << "Interleaved with [9, 10, 11]: ";
    arr.print();

    cout << "Middle element: " << arr.middle() << endl;
    cout << "Index of 10: " << arr.firstOccurrence(10) << endl;

    return 0;
}
