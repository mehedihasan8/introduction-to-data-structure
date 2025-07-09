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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        long long int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert(head, tail, val);
    }
    if (head == NULL)
    {
        cout << 0 << endl;
        return 0;
    }
    long long int mx = head->data, mn = head->data;
    Node *temp = head->next;
    while (temp != NULL)
    {
        if (temp->data > mx)
        {
            mx = temp->data;
        }
        if (temp->data < mn)
        {
            mn = temp->data;
        }
        temp = temp->next;
    }
    cout << mx - mn << endl;
    return 0;
}
