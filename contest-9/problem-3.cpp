#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    k = k % n;
    while (k--)
    {
        int last_value = a[n];
        for (int i = n; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[1] = last_value;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum = sum + a[i];
        }
        cout << sum << endl;
    }

    return 0;
}