#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        int ans = 1, curr = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                curr++;
            } else {
                curr = 1;
            }
            ans = max(ans, curr);
        }

        cout << ans << " ";

        while (q--) {
            char c;
            cin >> c;
            s.push_back(c);

            if (s[s.size() - 1] == s[s.size() - 2]) {
                curr++;
            } else {
                curr = 1;
            }
            ans = max(ans, curr);
            cout << ans << " ";
        }

        cout << endl;
    }

    return 0;
}
