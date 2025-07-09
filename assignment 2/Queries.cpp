#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    long long int data;
    Node *next;
    Node(long long int val)
    {
        data = val;
        next = NULL;
    }
};
int sz = 0;
void insert_at_head(Node *&head, Node *&tail, long long int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    sz++;
}
void insert_at_tail(Node *&head, Node *&tail, long long int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    sz++;
}
void delete_at_position(Node *&head, Node *&tail, int pos)
{
    if (head == NULL || pos < 0 || pos >= sz)
    {
        return;
    }
    Node *temp = head;
    if (pos == 0)
    {
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete temp;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        Node *nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        if (nodeToDelete == tail)
        {
            tail = temp;
        }
        delete nodeToDelete;
    }
    sz--;
}
void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
        {
            cout << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0)
        {
            insert_at_head(head, tail, m);
        }
        else if (n == 1)
        {
            insert_at_tail(head, tail, m);
        }
        else if (n == 2)
        {
            delete_at_position(head, tail, m);
        }
        print_list(head);
    }
    return 0;
}
