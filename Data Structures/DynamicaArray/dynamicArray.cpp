#include <iostream>
using namespace std;

// Source: https://neetcode.io/problems/dynamicArray

class DynamicArray {
private:
    int* arr;
    int length;
    int capacity;

public:

    DynamicArray(int capacity) : capacity(capacity), length(0), arr(new int[capacity]) {}

    // Returns the value at the given position
    int get(int i) {
        return arr[i];
    }

    // Sets the value into the given position
    void set(int i, int n) {
        arr[i] = n;
    }

    // Insert value into the array
    void pushback(int n) {
        if(length == capacity) {
            resize();
        }
        arr[length] = n;
        length++;
    }

    // Soft deletes the most recent element
    int popback() {
        if(length > 0) {
            length--;
        }
        return arr[length];
    }

    // Doubles the capacity of the array
    void resize() {
        capacity *= 2;
        int* newArr = new int[capacity];
        for(int i = 0; i < length; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    // Returns the size of the array
    int getSize() {
        return length;
    }

    // Returns the capacity of the array
    int getCapacity() {
        return capacity;
    }

    // Print the values of the array
    void print() {
        for(int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    DynamicArray arr(5);

    arr.pushback(1);
    arr.pushback(2);
    arr.pushback(3);
    arr.pushback(4);
    arr.pushback(5);
    arr.pushback(6);
    arr.pushback(7);
    cout << "Size: " << arr.getSize() << endl;
    cout << "Cap: " << arr.getCapacity() << endl;

    cout << "==========" << endl;

    arr.popback();
    cout << "Size: " << arr.getSize() << endl;
    cout << "Cap: " << arr.getCapacity() << endl;

    cout << "=== Array ===" << endl;
    arr.print();
}