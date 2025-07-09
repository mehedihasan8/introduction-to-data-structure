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
    int t;
    cin >> t;
    while (t--)
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
        int x;
        cin >> x;
        Node *temp = head;
        int check = 0;
        int flag = 0;
        while (temp != NULL)
        {
            check++;
            if (temp->data == x)
            {
                flag = 1;
                break;
            }
            temp = temp->next;
        }
        if (flag == 1)
        {
            cout << check - 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
