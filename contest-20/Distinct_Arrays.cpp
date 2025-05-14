#include <bits/stdc++.h>
using namespace std;
int MOD = 998244353;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long result = 1;
        for (int i = 0; i < n; i++) {
            int options_have = a[i] - i;
            if (options_have <= 0) {
                result = 0;
                break;
            }
            result = (result * options_have) % MOD;
        }
        cout << result << endl;
    }
    
    return 0;
}