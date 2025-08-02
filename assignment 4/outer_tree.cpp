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

Node* print_outer_left_tree(Node* root){
    
    if (root == NULL)
        return NULL;

    int left_sum = print_outer_left_tree(root->left);
    
    int right_sum = print_outer_left_tree(root->right);

    return ;
}

int main(){

    Node* root = input_tree();

    cout << print_outer_left_tree(root) << endl;
   
    return 0;
}