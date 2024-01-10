#include <iostream>
#include <vector>
using namespace std;

// Source: https://neetcode.io/problems/singlyLinkedList

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int value) : data(value), next(nullptr) {}

    ListNode(int value, ListNode* next) : data(value), next(next) {} 
};

class LinkedList {
private:
    ListNode* head;
    ListNode* tail;

public:
    LinkedList() {
        head = new ListNode(-1);
        tail = head;
    }

    int get(int index) {
        ListNode* curr = head->next;
        int i = 0;
        while(curr != nullptr) {
            if(i == index){
                return curr->data;
            }
            i++;
            curr = curr->next;
        }
        return -1; // Out of bounds or empty
    }

    // Method to insert at the head
    void insertHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head->next;
        head->next = newNode;
        if(newNode->next == nullptr) {
            // If list was empty before insertion..
            tail = newNode;
        }
    }
    
    void insertTail(int val) {
        tail->next = new ListNode(val);
        tail = tail->next;
    }

    bool remove(int index) {
        int i = 0;
        ListNode* curr = head;
        while(i < index && curr != nullptr) {
            i++;
            curr = curr->next;
        }

        if(curr != nullptr && curr->next != nullptr) {
            if(curr->next == tail) {
                tail = curr;
            }
            ListNode* toDelete = curr->next;
            curr->next = curr->next->next;
            delete toDelete;
            return true;
        }
        return false;
    }

    vector<int> getValues() {
        vector<int> res;
        ListNode* curr = head->next;
        while(curr != nullptr) {
            res.push_back(curr->data);
            curr = curr->next;
        }
        return res;
    }

    void print() {
        ListNode* curr = head->next;
        while(curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insertHead(1);
    list.insertHead(2);
    list.insertHead(3);
    list.insertHead(4);
    list.insertHead(5);
    list.insertHead(6);
    list.insertHead(7);

    list.print();

    list.remove(6);

    list.print();
    
}
