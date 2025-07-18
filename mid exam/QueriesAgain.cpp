#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next,
    Node *prev;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head (Node *&head, Node *&tail, int val) {
    Node *newnode = new Node(val);
    
    if (head == NULL) {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newnode = new Node(val);
    
    if (head == NULL) {
        head = tail = newnode;
        return;
    }
    
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int count_size(Node *head) {
    int cnt = 0;
    Node *temp = head;
    
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

bool insert_at_any_pos(Node *&head, Node *&tail, int idx, int val) {
    int sz = count_size(head);
    
    if (idx < 0 || idx > sz) {
        return false;  
    }

    if (idx == 0) {
        insert_at_head(head, tail, val);
    } else if (idx == sz) {
        insert_at_tail(head, tail, val);
    } else {
        Node *newNode = new Node(val);
        Node *tmp = head;
        
        for (int i = 1; i < idx; i++) {
            tmp = tmp->next;
        }
        
        newNode->next = tmp->next;
        tmp->next->prev = newNode;
        tmp->next = newNode;
        newNode->prev = tmp;
    }
    return true; 
}

void print_linked_list(Node *head, Node *tail) {
    cout << "L -> ";
    Node *temp = head;
    
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
    cout << endl;

    cout << "R -> ";
    temp = tail;
    
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    
    cout << endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--) {
        int idx, val;
        cin >> idx >> val;
        bool success = insert_at_any_pos(head, tail, idx, val);
        if (!success) {
            cout << "Invalid" << endl;
        } else {
            print_linked_list(head, tail);
        }
    }

    return 0;
}
