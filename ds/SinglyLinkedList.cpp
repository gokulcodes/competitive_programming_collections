#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode{
public:
    int data;
    SinglyLinkedListNode* next;
    SinglyLinkedListNode(int key){
        data = key;
        next = nullptr;
    }
};

class SinglyLinkedList{
public:
    SinglyLinkedListNode* head;
    SinglyLinkedList(){
        head = NULL;
    }
    
    int insert(int data){
        SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
        if(head == NULL){
            head = new_node;
            return 0;
        }
        SinglyLinkedListNode* curr = head;
        while(curr->next!=nullptr){
            curr = curr->next;
        }
        curr->next = new_node;
        return 0;
    }

    int insertAtPosition(int data, int position){
        SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
        if(head == NULL){
            head = new_node;
            return 0;
        }
        if(position == 0){
            new_node->next = head;
            head = new_node;
            return 0;
        }
        int count = 0;
        SinglyLinkedListNode* curr = head;
        SinglyLinkedListNode* prev = head;
        while(curr->next != nullptr && count != position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        // cout << prev->data <<" "<< curr->data<< endl;
        prev->next = new_node;
        new_node->next = curr;
        
        return 0;
    }

    void deleteElAtPosition(int position){
        int count = 0;
        SinglyLinkedListNode* curr = head;
        SinglyLinkedListNode* prev = head;
        while(curr->next != NULL ){
            if(count == position){
                break;
            }
            prev = curr;
            curr = curr->next;
            count++;
        }
        SinglyLinkedListNode* temp = curr->next;
        prev->next = temp;
        free(curr);
    }

    void leftRotataion(string side, int k){
        SinglyLinkedListNode* curr = head;
        SinglyLinkedListNode* kth = head;
        int count = 1;
        while(curr->next != nullptr){
            if(k == count){
                kth = curr;
            }
            curr = curr->next;
            count++;
        }

        curr->next = head;
        head = kth->next;
        kth->next = nullptr;
    }

    void reverseList(){
        SinglyLinkedListNode* next= nullptr;
        SinglyLinkedListNode* curr = head;
        SinglyLinkedListNode* prev= nullptr;
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void print(){
        SinglyLinkedListNode* temp = head;
        while(temp!=nullptr){
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main(){
    SinglyLinkedList* L = new SinglyLinkedList;
    L->insert(1);
    L->insert(2);
    L->insert(3);
    L->insert(4);
    L->insert(5);
    L->insert(6);
    L->insert(7);
    L->insertAtPosition(3, 0);
    // L->deleteElAtPosition(2);
    L->leftRotataion("LEFT", 1);
    L->reverseList();
    L->print();
    return 0;
}