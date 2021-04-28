#include <bits/stdc++.h>

using namespace std;

class CircularLinkedListNode{
public:
    int data;
    CircularLinkedListNode* next;
    CircularLinkedListNode(int key){
        data = key;
        next = nullptr;
    }
};

class CircularLinkedList{
public:
    CircularLinkedListNode* head;
    CircularLinkedListNode* tail;

    CircularLinkedList(){
        head = nullptr;
        tail = nullptr;
    }
    void insertAtEnd(int data){
        CircularLinkedListNode* new_node = new CircularLinkedListNode(data);
        CircularLinkedListNode* curr = head;
        if(head == nullptr){
            head = new_node;
            new_node->next = head;
            tail = new_node;
            return;
        }
        while(curr->next != head){
            curr = curr->next;
        }
        // cout << curr->data << endl;
        curr->next = new_node;
        tail = new_node;
        new_node->next = head;

    }

    void insertAtPosition(int data, int pos){
        CircularLinkedListNode* new_node = new CircularLinkedListNode(data);
        CircularLinkedListNode* curr = head;
        int count = 1;

        if(pos == 1){
            new_node->next = head;
            head = new_node;
            tail->next = head;
            return;
        }

        do{
            count++;
            curr = curr->next;
        }while(count < pos);

        if(curr == tail){
            new_node->next = curr->next;
            curr->next = new_node;
            tail = new_node;
            return;
        }

        new_node->next = curr->next;
        curr->next = new_node;
        // cout << "END: " << curr->data << endl;
    }
    
    void deleteNode(int pos){
        int count = 1;
        CircularLinkedListNode* curr = head;
        CircularLinkedListNode* prev = head;

        while(count < pos){
            prev = curr;
            curr = curr->next;
            count++;
        }
        if(curr == head){
            head = curr->next;
            tail->next = head;
            free(curr);
            return;
        }else if(curr == tail){
            prev->next = tail->next;
            tail = prev;
        }
        prev->next = curr->next;
        delete(curr);
    }

    void print(){
        CircularLinkedListNode* curr = head;
        do{
            cout << curr->data << endl;
            curr = curr->next;
        }while(curr->next != head);
        cout << "TAIL: " << tail->data << '\n';
    }
};

int main(){
    CircularLinkedList* C = new CircularLinkedList();
    C->insertAtEnd(1);
    C->insertAtEnd(2);
    C->insertAtEnd(3);
    C->insertAtEnd(4);
    C->insertAtEnd(6);
    C->insertAtEnd(7);

    C->insertAtPosition(5, 4);
    C->deleteNode(7);
    C->print();

    // C->insertAtPosition();
    return 0;
}