/*
Problem Statement

You will given an integer array A of size N and another array B of size M. Also you will be given an index X. You need to insert the whole array B to the index X of array A.

Input Format

First line will contain N.
Second line will contain array A.
Third line will contain M.
Fourth line will contain array B.
The last line will contain X.
Constraints

1 <= N, M <= 10^3
1 <= A[i], B[j] <= 10^3; Where 0 <= i < N and 0 <= j < M
0 <= X <= N
Output Format

Output the final array A.

 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x;
    cin >> x;

    int total_length = a.size() + b.size();
    a.insert(a.begin() + x, b.begin(), b.end());

    for (int i = 0; i < total_length; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}