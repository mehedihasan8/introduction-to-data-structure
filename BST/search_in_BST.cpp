#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;

    if(val == -1)
        return NULL;
    else 
        root = new Node(val);

    queue<Node*> q;

    if(root)
        q.push(root);
    
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int left_val, right_val;
        cin >> left_val >> right_val;

        if(left_val == -1)
            left_val = NULL;
        else
            p->left = new Node(left_val);

        if(right_val == -1)
            right_val = NULL;
        else
            p->right = new Node(right_val);

        if(p->left)
            q.push(p->left);

        if(p->right)
            q.push(p->right);
    }

    return root;
}


bool search(Node* root, int val){
    if(root == NULL)
        return false;

    if(root->val == val)
        return true;

    else if(root->val > val)
        return search(root->left, val);

    else
        return search(root->right, val);
}

int main(){

    Node* root = input_tree();

    int val;
    cin >> val;

    if(search(root, val))
        cout << "Found" << endl;
    
    else
        cout << "Not Found" << endl;

    return 0;
}