#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int val;
        Node* left;
        Node* right;

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
        return root = NULL;

    root = new Node(val);

    queue<Node*> q;

    if(root) 
        q.push(root);


    while(!q.empty()){

        Node* p = q.front();
        q.pop();

        int left_val, right_val;

        cin >> left_val >> right_val;

        Node* my_left, *my_right;

        if(left_val == -1) 
            my_left = NULL;
        else
            my_left = new Node(left_val);


        if(right_val == -1)
            my_right = NULL;
        else
            my_right = new Node(right_val);


        p->left = my_left;
        p->right = my_right;

        if(p->left)
            q.push(p->left);

        if(p->right)
            q.push(p->right);
    }

    return root;
}

void print_leaf_nodes(Node* root, vector<int>& leaf_nodes) {
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL) {
        leaf_nodes.push_back(root->val);
        return;
    }

    print_leaf_nodes(root->left, leaf_nodes);
    print_leaf_nodes(root->right, leaf_nodes);
}

int main() {
    Node* root = input_tree();

    vector<int> leaf_nodes;

    print_leaf_nodes(root, leaf_nodes);

    sort(leaf_nodes.begin(), leaf_nodes.end(), greater<int>());

    for (int i = 0; i < leaf_nodes.size(); i++) {
            cout << leaf_nodes[i];

        if (i < leaf_nodes.size() - 1)
            cout << " ";
    }

    return 0;
}
