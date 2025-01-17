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



void level_values(Node*root,int x,vector<int>&v){
    if(root == NULL){
        return;
    }
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while (!q.empty())
    {
        pair<Node*,int> parent = q.front();
        q.pop();
        Node*node = parent.first;
        int level = parent.second;
        if(level == x){
            v.push_back(node->val);
        }
        if(node->left){
            q.push({node->left,level +1});
        }
        if(node->right){
            q.push({node->right,level+1});
        }
    }
    
    
}

int main(){
    Node*root = input_tree();
    int x;
    cin >>x;
    vector<int>v;
    level_values(root,x,v);
    if(v.empty()){
        cout << "Invalid"<<endl;
        return 0;
    }
    for(int val : v){
        cout << val << " ";
    }
    return 0;
}