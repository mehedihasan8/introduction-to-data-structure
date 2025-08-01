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

void inset_at_head(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main(){
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* tail = new Node(300);


    head->next=a;

    a->prev=head;
    a->next=tail;

    tail->prev=a;
    
    inset_at_head(head, 50);
    print_forward(head);

    return 0;
}