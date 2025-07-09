#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;

    Node(int val) { 
        this->val = val;
        this->next = NULL; 
    }
};


void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* new_node = new Node(val);
    
    if(head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;

    tail = tail->next;
}


void print_linked_list(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout<< temp->val << endl;
        temp = temp->next;
    }
}


int main(){
    Node* head = new Node(10);

    Node* a = new Node(20);

    Node* tail = new Node(30);

    
    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 100);

    print_linked_list(head);

    return 0;
}