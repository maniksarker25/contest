#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> p(n + 1, 0); 
        vector<bool> used(n + 1, false);

        for (int i = 1; i <= n; ++i) {
            int candidate = x & (~i);
            if (candidate >= 1 && candidate <= n && !used[candidate]) {
                p[i] = candidate;
                used[candidate] = true;
            }
        }

        int unused_num = 1;
        for (int i = 1; i <= n; i++) {
            if (p[i] == 0) {
                while (unused_num <= n && used[unused_num]) {
                    unused_num++;
                }
                if (unused_num <= n) {
                    p[i] = unused_num;
                    used[unused_num] = true;
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    return 0;
}