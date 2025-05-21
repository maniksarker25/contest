#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int total = n * m;
        int max_alice = 0;
        if (k == 0) {
            cout << total << endl;
            continue;
        }
        for (int c = 1; c < m; c++) {
            int p1 = n * c;
            int p2 = n * (m - c);
            if (p1 >= k) {
                max_alice = max(max_alice, p2);
            }
            if (p2 >= k) {
                max_alice = max(max_alice, p1);
            }
        }

        for (int r = 1; r < n; r++) {
            int p1 = m * r;
            int p2 = m * (n - r);
            if (p1 >= k) {
                max_alice = max(max_alice, p2);
            }
            if (p2 >= k) {
                max_alice = max(max_alice, p1);
            }
        }

        cout << max_alice << endl;
    }
    
    return 0;
}