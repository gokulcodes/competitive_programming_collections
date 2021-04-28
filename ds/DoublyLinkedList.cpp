#include <bits/stdc++.h>

using namespace std;

class DoublyLinkedListNode{
public:
    int data = 0;
    DoublyLinkedListNode* next;
    DoublyLinkedListNode* prev;
    DoublyLinkedListNode(int key){
        data = key;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList{
public:
    DoublyLinkedListNode* head;
    DoublyLinkedListNode* tail;
    DoublyLinkedList(){
        head = nullptr;
        tail = nullptr;
    }
    void insert(int data){
        DoublyLinkedListNode* new_node = new DoublyLinkedListNode(data);
        DoublyLinkedListNode* curr = head;


        if(head == nullptr){
            head = new_node;
            tail = new_node;
            return;
        }
        while(curr->next!=nullptr){
            curr = curr->next;
        }
        curr->next = new_node;
        new_node->prev = curr;
        tail = new_node;
        
    }
    void insertAtPosition(int data, int pos){
        int count = 1;
        DoublyLinkedListNode* new_node = new DoublyLinkedListNode(data);
        DoublyLinkedListNode* prev = head;
        DoublyLinkedListNode* curr = head;
        while(count < pos){
            count++;
            prev = curr;
            curr=curr->next;
        }
        // 1 3 4
        //  2
        // cout << "CURR: " << curr->data << endl;
        new_node->next = curr->next;
        curr->next = new_node;
        new_node->prev = curr;
        // curr->next = new_node->prev;
        // curr->next->prev = new_node->next;
    }

    void deleteAtPosition(int pos){
        int count = 1;
        DoublyLinkedListNode* curr = head;
        // 1 2 3 4
        if(pos == 1){
            head = curr->next;
            curr->next->prev = nullptr;
            delete(curr);
            return;
        }
        while(count < pos){
            curr = curr->next;
            count++;
        }
        if(curr == tail){
            tail = curr->prev;
            tail->next = nullptr;
            delete(curr);
            return;
        }
        cout << curr->data << endl;
        curr->next->prev = curr->prev;
        curr->prev->next = curr->next;
        // cout << curr->prev->next->data << endl;
        delete(curr);
    }

    void leftRotation(int k){
        int count = 1;
        DoublyLinkedListNode* curr = head;
        DoublyLinkedListNode* kthnode = head;
        while(count < k){
            kthnode = kthnode->next;
            count++;
        }
        // cout << kthnode->data << endl;
        tail->next = head;
        head = kthnode->next;
        kthnode->next = nullptr;
        tail = kthnode;
    }

    void reverseList(){
        // 1 2 3 4
        DoublyLinkedListNode* curr = head;
        DoublyLinkedListNode* temp = head;
        DoublyLinkedListNode* prev = head;
        DoublyLinkedListNode* next = head;

        while (curr!=nullptr){
            prev = curr->prev;
            curr->prev = curr->next;
            curr->next = prev;
            curr = curr->prev;
        }
        head = tail;
    }

    void print(){
        DoublyLinkedListNode* curr = head;
        DoublyLinkedListNode* prev = head;
        while(curr!=nullptr){
            prev = curr;
            cout << curr->data << endl;
            curr = curr->next;
            // cout << "Prev: " << curr->prev->data << " CURR: " <<  curr->data << " NEXT: " << curr->next->data << endl;
        }
        tail = prev;
        cout << "TAIL: " << tail->data << endl;
    }
};

int main(){
    DoublyLinkedList* D = new DoublyLinkedList();
    D->insert(1);
    D->insert(2);
    D->insert(3);
    D->insert(4);
    D->insert(5);
    D->insert(6);

    D->insertAtPosition(2, 1);
    // D->deleteAtPosition(6);
    // D->leftRotation(3);
    D->reverseList();
    D->print();
    return 0;
}