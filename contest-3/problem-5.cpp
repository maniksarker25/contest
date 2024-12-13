/*
Sample Input 1

7
Sample Output 1

\     /
 \   /
  \ /
   X
  / \
 /   \
/     \
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "X";
        return 0;
    }

    int mid_gap = n - 2;
    int left_gap = 0;

    for (int i = 1; i <= n / 2; i++, mid_gap -= 2, left_gap++)

    {
        int l_gap = left_gap;
        for (int i = 1; i <= l_gap; i++)
        {
            cout << " ";
        }

        int m_gap = mid_gap;
        cout << "\\";
        for (int i = 1; i <= m_gap; i++)
        {
            cout << " ";
        }
        cout << "/";
        cout << endl;
    }
    for (int i = 1; i <= n / 2; i++)
    {
        cout << " ";
    }
    cout << "X";
    cout << endl;

    mid_gap += 2;
    left_gap -= 1;

    for (int i = 1; i <= n / 2; i++, mid_gap += 2, left_gap--)

    {
        int l_gap = left_gap;
        for (int i = 1; i <= l_gap; i++)
        {
            cout << " ";
        }

        int m_gap = mid_gap;
        cout << "/";
        for (int i = 1; i <= m_gap; i++)
        {
            cout << " ";
        }
        cout << "\\";
        cout << endl;
    }

    return 0;
}