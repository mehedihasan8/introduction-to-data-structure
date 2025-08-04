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

Node* convert_array_to_BST(int arr[], int n, int l, int r){
    
    if(l > r)
        return NULL;

    int mid = (l + r) / 2;
    Node* root = new Node(arr[mid]);

    Node* leftroot = convert_array_to_BST(arr, n, l, mid - 1);
    Node* rightroot = convert_array_to_BST(arr, n, mid + 1, r);

    root->left = leftroot;
    root->right = rightroot;

    return root;
}

void level_order_print(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";
        
        if(f->left)
            q.push(f->left);

        if(f->right)
            q.push(f->right);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Node* root = convert_array_to_BST(arr, n, 0, n - 1);

    level_order_print(root);

    return 0;
}