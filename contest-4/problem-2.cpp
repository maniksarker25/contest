/*

Problem Statement

You need to take a singly linked list of integer values as input. Afterward, you will be given an integer value X. Your task is to determine whether X is present in the linked list or not. If it is present, print its first index from the left side; otherwise, print -1. Assume that the linked list's index starts with 0.

Note: You must use a singly linked list; otherwise, you will not receive marks.

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain the values of the singly linked list, and will terminate with -1.
Second line of each test case will contain X.
Constraints

1 <= T <= 100
1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
-10^9 <= V <= 10^9; Here V is the value of each node.
-10^9 <= X <= 10^9
Output Format

Output the index of X in the linked list.
Sample Input 0

4
1 2 3 4 5 -1
3
1 2 3 -1
5
1 -1
1
10 20 -1
20
Sample Output 0

2
-1
0
1
Submissions: 45
Max Score: 20
Difficulty: Easy
Rate This Challenge:


More

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

//
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

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
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
        }

        insert_at_tail(head, tail, val);
    }
    return 0;
}