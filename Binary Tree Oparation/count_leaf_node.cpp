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

        // step 1: pop the front node
        Node* p = q.front();
        q.pop();

        // step 2: input the left child of the node
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

        // step 3: children push into the queue
        if(p->left)
            q.push(p->left);

        if(p->right)
            q.push(p->right);
    }

    return root;
}

int count_leaf_nodes(Node* root){

    if(root == NULL)
        return 0;

    if(root->left == NULL && root->right == NULL)
        return 1;

    int left_count = count_leaf_nodes(root->left);

    int right_count = count_leaf_nodes(root->right);

    return (left_count + right_count);
}

int main(){

    Node* root = input_tree();

    cout << "Leaf " << count_leaf_nodes(root) << endl;
   
    return 0;
}