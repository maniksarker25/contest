/*
Problem Statement

You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

Note: You must use singly linked list to solve this problem, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
-10^9 <= V <= 10^9; Here V is the value of each node.
Output Format

Output the difference between the maximum and minimum value.
Sample Input 0

2 4 1 5 3 6 -1
Sample Output 0

5
 */

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

// insert at tail
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

void find_difference_between_min_max_and_print(Node *head)
{

    int min = INT_MAX;
    int max = INT_MIN;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > max)
        {
            max = temp->val;
        }
        if (temp->val < min)
        {
            min = temp->val;
        }

        temp = temp->next;
    }

    int difference = max - min;
    cout << difference;
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
    find_difference_between_min_max_and_print(head);

    return 0;
}