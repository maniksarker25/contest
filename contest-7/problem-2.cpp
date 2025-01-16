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



Node* intput_tree(){
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
        cin >> l>>r;
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

void leaf_nodes(Node*root,vector<int>&v){

    if(!root){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        v.push_back(root->val);
    }
    leaf_nodes(root->left,v);
    leaf_nodes(root->right,v);
}


int main(){
    Node * root = intput_tree();
    vector<int>v;
    leaf_nodes(root,v);
    sort(v.begin(),v.end(),std::greater<int>());
    for(int val : v){
        cout << val << ' ';
    }
    return 0;
}