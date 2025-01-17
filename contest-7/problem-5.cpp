#include <bits/stdc++.h>
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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }
        parent->left = myLeft;
        parent->right = myRight;

        if (parent->left)
        {
            q.push(parent->left);
        }
        if (parent->right)
        {
            q.push(parent->right);
        }
    }

    return root;
}

void print_outer_left(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Node *outer = root->left ? root->left : root->right;
    print_outer_left(outer);
    cout << root->val << " ";
}
void print_outer_right(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Node *outer = root->right ? root->right : root->left;
    cout << root->val << " ";
    print_outer_right(outer);
}

int main()
{
    Node *root = input_tree();
    if(root->left == NULL){
        cout << root->val  << ' ';
    }
    else{
        print_outer_left(root);
    }
    if (root->right)
    {
        print_outer_right(root->right);
    }
}