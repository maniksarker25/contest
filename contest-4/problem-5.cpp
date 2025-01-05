// #include <bits/stdc++.h>

// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
// }

// void print_linked_list(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }

// void delete_from_any(Node *&head, int idx)
// {
//     Node *temp = head;
//     for (int i = 1; i < idx; i++)
//     {
//         temp = temp->next;
//     }

//     Node *deletedNode = temp->next;
//     temp->next = temp->next->next;
//     delete deletedNode;
// }

// void delete_from_tail(Node *&head, Node *&tail, int idx)
// {
//     Node *temp = head;
//     for (int i = 1; i < idx; i++)
//     {
//         temp = temp->next;
//     }

//     Node *deletedNode = temp->next;
//     temp->next = temp->next->next;
//     delete deletedNode;
//     tail = temp;
// }
// int count_linked_list(Node *head)
// {
//     Node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }

//     return count;
// }

// void remove_duplicate(Node *head, Node *&tail)
// {
//     for (Node *i = head; i != NULL; i = i->next)
//     {
//         Node *prev = i;
//         for (Node *j = i->next; j != NULL; j = j->next)
//         {
//             if (i->val == j->val)
//             {
//                 prev->next = j->next; // Bypass the duplicate node
//                 if (j == tail)        // If the node to be deleted is the tail
//                 {
//                     tail = prev; // Update the tail
//                 }
//                 delete j; // Delete the duplicate node
//                 break;    // After deleting a duplicate, break to avoid messing with the iterator
//             }
//             prev = j; // Move prev to the current node for the next iteration
//         }
//     }
// }

// int main()
// {

//     Node *head = NULL;
//     Node *tail = NULL;
//     int val;
//     while (true)
//     {
//         cin >> val;
//         if (val == -1)
//         {
//             break;
//         }
//         insert_at_tail(head, tail, val);
//     }
//     int totalNode = count_linked_list(head);
//     remove_duplicate(head, tail);
//     print_linked_list(head);
//     return 0;
// }

// another tay------------------------

#include <iostream>

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

void remove_duplicate(Node *head)
{
    Node *i = head;
    while (i != NULL)
    {
        Node *prev = i;
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val == j->val)
            {
                prev->next = j->next;
                delete j;
                j = prev->next;
            }
            else
            {
                prev = j;
                j = j->next;
            }
        }
        i = i->next;
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

    print_linked_list(head);

    return 0;
}

// any way
// #include <iostream>

// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
// }

// void print_linked_list(Node *head)
// {
//     for (Node *temp = head; temp != NULL; temp = temp->next)
//     {
//         cout << temp->val << " ";
//     }
// }

// void delete_from_any(Node *&head, int idx)
// {
//     Node *temp = head;
//     for (int i = 1; i < idx; i++)
//     {
//         temp = temp->next;
//     }

//     Node *deletedNode = temp->next;
//     temp->next = temp->next->next;
//     delete deletedNode;
// }

// void delete_from_tail(Node *&head, Node *&tail, int idx)
// {
//     Node *temp = head;
//     for (int i = 1; i < idx; i++)
//     {
//         temp = temp->next;
//     }

//     Node *deletedNode = temp->next;
//     temp->next = temp->next->next;
//     delete deletedNode;
//     tail = temp;
// }

// int count_linked_list(Node *head)
// {
//     int count = 0;
//     for (Node *temp = head; temp != NULL; temp = temp->next)
//     {
//         count++;
//     }
//     return count;
// }

// void remove_duplicate(Node *head)
// {
//     for (Node *i = head; i != NULL; i = i->next)
//     {
//         Node *prev = i;
//         for (Node *j = i->next; j != NULL; j = j->next)
//         {
//             if (i->val == j->val)
//             {
//                 prev->next = j->next;
//                 delete j;
//                 j = prev->next;
//             }
//             else
//             {
//                 prev = j;
//             }
//         }
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int val;

//     for (;;)
//     {
//         cin >> val;
//         if (val == -1)
//         {
//             break;
//         }
//         insert_at_tail(head, tail, val);
//     }

//     remove_duplicate(head);

//     print_linked_list(head);

//     return 0;
// }
