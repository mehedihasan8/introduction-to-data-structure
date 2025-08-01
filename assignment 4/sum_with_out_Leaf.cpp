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

int sum_with_out_leaf(Node* root){
    
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    int left_sum = sum_with_out_leaf(root->left);
    
    int right_sum = sum_with_out_leaf(root->right);

    return (root->val + left_sum + right_sum);
}

int main(){

    Node* root = input_tree();

    cout << sum_with_out_leaf(root) << endl;
   
    return 0;
}