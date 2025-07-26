#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue {
public:
    Node* head;
    Node* tail;
    int sz = 0;

    myQueue() {
        head = NULL;
        tail = NULL;
    }

    void push(int val) {
        sz++;
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop() {
        if (head == NULL) return;
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL){
            tail = NULL;
            return;
        } 

        head->prev = NULL;
    }

    int front() {
        if (head == NULL) {
            return -1;
        }
        return head->val;
    }

    bool empty() {
        return head == NULL;
    }
};

class myStack {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop() {
        if (tail == NULL) return;
        sz--;
        Node* deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if (tail == NULL) {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top() {
        if (tail == NULL) return -1;
        return tail->val;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    myStack st; 
    myQueue qu;     

    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        qu.push(x);
    }

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty() && !qu.empty()) {
        if (st.top() != qu.front()) {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        qu.pop();
    }

    cout << "YES" << endl;
    return 0;
}
