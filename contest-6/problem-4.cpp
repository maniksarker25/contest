#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> qu;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string s;
            cin >> s;
            qu.push(s);
        }
        else
        {
            if (qu.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << qu.front() << endl;
                qu.pop();
            }
        }
    }

    return 0;
}