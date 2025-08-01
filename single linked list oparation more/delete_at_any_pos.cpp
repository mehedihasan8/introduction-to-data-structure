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

void insert_at_tail(Node* &head, Node* &tail, int val){

    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node* head){

    Node* temp = head;

    while(temp != NULL){

        cout<< temp->val << " "; 

        temp = temp->next;
    }

    cout<<endl;
}

void delete_at_any_pos(Node* &head, int pos) {
    Node* temp = head;

    for(int i=1; i<pos; i++){
        temp = temp->next;
    }

    Node* toDelete = temp->next;

    temp->next = temp->next->next;

    delete toDelete;

}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int val;
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }

    delete_at_any_pos(head, 1);
    
    print_linked_list(head);
    return 0;
}