#include <bits/stdc++.h>

using namespace std;

class CircularDoublyLinkedListNode{
public:
    CircularDoublyLinkedListNode* next;
    CircularDoublyLinkedListNode* prev;
    int data;
    CircularDoublyLinkedListNode(int key){
        data = key;
        next = nullptr;
        prev = nullptr;
    }
};

class CircularDoublyLinkedList{
public:
    CircularDoublyLinkedListNode* head;
    CircularDoublyLinkedListNode* tail;

    CircularDoublyLinkedList(){
        head = nullptr;
        tail = nullptr;
    }
    void insertAtPosition(int data, int pos){
        CircularDoublyLinkedListNode* new_node = new CircularDoublyLinkedListNode(data);
        CircularDoublyLinkedListNode* curr = head;
        if(pos == 1){
            head = new_node;
            tail = new_node;
        }
        int count = 1;
        while(count < pos){
            curr = curr->next;
        }
        

    }
};

int main(){
    CircularDoublyLinkedList* C = new CircularDoublyLinkedList();
    return 0;
}