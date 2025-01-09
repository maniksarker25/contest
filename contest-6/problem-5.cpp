#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        queue<char> q;
        for (char c : s)
        {
            if (q.empty())
            {
                q.push(c);
            }
            else if (c == '1' && q.front() == '0')
            {
                q.pop();
            }
            else
            {
                q.push(c);
            }
        }
        if (q.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}