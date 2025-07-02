#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1); 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int ans = a[1]; 

        for (int j = 2; j <= n; j++) {
            int time = max(a[j] + 1, j - 1);
            ans = min(ans, time);
        }

        cout << ans << endl;
    }

    return 0;
}