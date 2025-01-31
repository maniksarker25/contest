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


Node* input_tree(){
    int val;
    cin >> val;
    Node * root ;
    if(val == -1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }

    queue <Node*> q;
    if(root){
        q.push(root);
    }

    while (!q.empty())
    {
        Node*p = q.front();
        q.pop();

        int l,r;
        cin >>l >> r;
        Node*myLeft,*myRight;
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

        p->left = myLeft;
        p->right = myRight;

        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }


    return root;
    

}


int freq[110] ={0};

void inorder(Node*root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    if(root->left == NULL && root->right == NULL){
        freq[root->val]++;
    }
    inorder(root->right);
}

int main(){
    Node* root = input_tree();
    inorder(root);
    int most_apear_val = 0;
    int most_apear_index = -1;
    for(int i = 0;i<110;i++){
        if(freq[i] > most_apear_val){
            most_apear_val = freq[i];
            most_apear_index = i;
        }
    }

    cout << most_apear_index << endl;
    return 0;
}

