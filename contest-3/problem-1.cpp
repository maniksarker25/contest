/*
Problem Statement

You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

Input Format

First line will contain N.
Second line will contain the array A.
Constraints

1 <= N <= 100000
0 <= A[i] <= 10^9; Where 0 <= i < N
Output Format

Output "YES" or "NO" without the quotation marks according to the problem statement.
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int flat = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin() + i + 1, v.end(), v[i]);
        if (it != v.end())
        {
            flat = 1;
            break;
        }
    }

    if (flat == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}