#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

insert_at_any_pos(Node* &head, int pos, int val){
    Node* new_node = new Node(val);

    Node* temp = head;

    for(int i=1; i<pos; i++){
        temp = temp->next;
    }

    new_node->next = temp->next;
    temp->next = new_node;
    
};

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_pos(head, 2, 100);

    print_linked_list(head);

    return 0;
}