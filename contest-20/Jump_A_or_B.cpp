#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >>b;
        long long diff = a - b;
        long long num = m - n * b;

        if (diff == 0) {
            if(n * a == m){
                cout << "YES"<<endl;
            }
        } else if (num % diff != 0) {
            cout << "NO"<<endl;
        } else {
            long long x = num / diff;
            if (x >= 0 && x <= n){
                cout << "YES"<<endl;
            }
            else{
                cout << "NO"<<endl;
            }
        }
    }

    return 0;
}