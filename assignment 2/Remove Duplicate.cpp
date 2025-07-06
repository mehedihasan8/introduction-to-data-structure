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
void insert(Node *&head, Node *&tail, long long int val)
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
}
void deleteNode(Node *&head, Node *&tail, Node *nodeToDelete)
{
    if (head == NULL)
    {
        return;
    }
    if (nodeToDelete == head)
    {
        head = head->next;
        delete nodeToDelete;
        return;
    }
    if (nodeToDelete == tail)
    {
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        delete nodeToDelete;
        return;
    }
    Node *temp = head;
    while (temp != NULL && temp->next != nodeToDelete)
    {
        temp = temp->next;
    }
    if (temp != NULL)
    {
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    long long int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert(head, tail, val);
    }
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL;)
        {
            if (i->data == j->data)
            {
                Node *nodeToDelete = j;
                j = j->next;
                deleteNode(head, tail, nodeToDelete);
            }
            else
            {
                j = j->next;
            }
        }
    }
    printList(head);
    return 0;
}
