#include <bits/stdc++.h>
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
        tail = newNode;
    }

    void pop() {
        if (head == NULL) {
            return;
        }

        sz--;
        Node* deleteNode = head;
        head = head->next;

        // If the queue becomes empty, reset tail as well
        if (head == NULL) {
            tail = NULL;
        }

        delete deleteNode;
    }

    int front() {
        if (head == NULL) {
            return -1;
        }
        return head->val;
    }

    int back() {
        if (tail == NULL) {
            return -1;
        }
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    myQueue q;

    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
