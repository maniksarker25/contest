#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int size = 2 * n;
        deque<int> dq(size);
        for (int i = 0; i < size; i++) {
            cin >> dq[i];
        }
        long long score = 0;
        for (int round = 0; round < n; round++) {
            int maxVal = -1;
            int maxIdx = -1;
            for (int i = 0; i < dq.size(); i++) {
                if (dq[i] > maxVal) {
                    maxVal = dq[i];
                    maxIdx = i;
                }
            }
            score += maxVal;
            dq.erase(dq.begin() + maxIdx);

            if (!dq.empty()){
                dq.pop_front();
            }
        }

        cout << score << endl;
    }
    return 0;
}
