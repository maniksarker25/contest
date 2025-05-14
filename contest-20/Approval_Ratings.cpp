#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        vector<int> a(5);
        int total = 0;
        for (int i = 0; i < 5; i++) {
            cin >> a[i];
            total += a[i];
        }

        if (total >= 35) {
            cout << 0 << endl;
            continue;
        }

        sort(a.begin(), a.end());

        int markNeed = 35 - total;
        int count = 0;

        for (int i = 0; i < 5 && markNeed > 0; i++) {
            int gain = 10 - a[i];
            markNeed -= gain;
            count++;
        }

        cout << count * 100 << endl;
    }

    return 0;
}
