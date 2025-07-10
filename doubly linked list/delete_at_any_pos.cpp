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

void delete_at_any_pos(Node* &head, int pos){
   Node* deleteNode = head;

   for(int i=1; i<pos; i++){
       deleteNode = deleteNode->next;
   }

   deleteNode->next->prev = deleteNode->prev;

   deleteNode->prev->next = deleteNode->next;

   delete deleteNode;
 
}

int main(){
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* tail = new Node(300);


    head->next=a;

    a->prev=head;
    a->next=tail;

    tail->prev=a;

    delete_at_any_pos(head, 2);

    print_forward(head);

    return 0;
}