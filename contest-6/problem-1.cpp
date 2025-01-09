#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }
    int isSame = 1;

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            isSame = 0;
            break;
        }
        st.pop();
        q.pop();
    }
    if (isSame == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}