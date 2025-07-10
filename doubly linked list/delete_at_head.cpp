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

void delete_at_head(Node* &head, Node* &tail){
   Node* deleteNode = head;

   head = head->next;
   head->prev = NULL;
   delete deleteNode;

   if(head == NULL){
       tail = NULL;
       return;
   }

   head->prev = NULL;
 
}

int main(){
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* tail = new Node(300);


    head->next=a;

    a->prev=head;
    a->next=tail;

    tail->prev=a;

    delete_at_head(head, tail);

    print_forward(head);

    return 0;
}