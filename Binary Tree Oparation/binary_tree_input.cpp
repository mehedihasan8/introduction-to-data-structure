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

void level_order_traversal(Node* root){
    
    if(root == NULL) {
        cout << "Tree is empty." << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        // step 1: pop the front node
        Node* f = q.front();
        q.pop();
        
        // step 2: print the value of the node
        cout<< f->val <<" ";
       
        // step 3: push the left and right children of the node into the queue
        if(f->left != NULL)
            q.push(f->left);
        
        if(f->right != NULL)
            q.push(f->right);
        
    }
}


int main(){

    Node* root = input_tree();

    level_order_traversal(root);
   
    return 0;
}