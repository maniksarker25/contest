#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node * input_tree(){
    int val;
    cin >> val;
    Node*root;
    if(val == -1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }

    queue<Node*>q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        Node * parent = q.front();
        q.pop();
        int l,r;
        cin >> l >> r;
        Node*myLeft;
        Node*myRight;
        if(l == -1){
            myLeft = NULL;
        }
        else{
            myLeft = new Node(l);
        }
        if(r == -1){
            myRight = NULL;
        }
        else{
            myRight = new Node(r);
        }
        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left){
            q.push(parent->left);
        }
        if(parent->right){
            q.push(parent->right);
        }
    }

    return root;
}


int count_node(Node*root){
    int count = 0;
    if(!root){
        return 0;
    }
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        count++;
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }

    return count;
}


int height(Node*root){
    if(!root){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r) + 1;
}

int main(){
    Node*root = input_tree();
    int total_node = count_node(root);
    int max_height = height(root);
    if(total_node == (pow(2,max_height) -1)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}