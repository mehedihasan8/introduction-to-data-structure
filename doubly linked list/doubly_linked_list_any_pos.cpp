#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};


void print_forward(Node* head){
    Node* tmp = head;

    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

void inset_at_any_pos(Node* &head, int pos, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;

    for(int i=1; i<pos; i++){
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next->prev = newNode;

    tmp->next = newNode;
    newNode->prev = tmp;
}

int main(){
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* tail = new Node(300);


    head->next=a;

    a->prev=head;
    a->next=tail;

    tail->prev=a;

    inset_at_any_pos(head, 2, 400);

    print_forward(head);

    return 0;
}