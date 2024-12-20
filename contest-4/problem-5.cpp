#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void delete_from_any(Node *&head, int idx)
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    Node *deletedNode = temp->next;
    temp->next = temp->next->next;
    delete deletedNode;
}

void delete_from_tail(Node *&head, Node *&tail, int idx)
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    Node *deletedNode = temp->next;
    temp->next = temp->next->next;
    delete deletedNode;
    tail = temp;
}

void remove_duplicate(Node *head)
{

    int x = 0;
    for (Node *i = head; i->next != NULL; i = i->next, x++)
    {
        int y = x + 1;
        for (Node *j = i->next; j != NULL; j = j->next, y++)
        {

            if (i->val == j->val)
            {
            }
        }
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    
    remove_duplicate(head);
    // print_linked_list(head);
    return 0;
}