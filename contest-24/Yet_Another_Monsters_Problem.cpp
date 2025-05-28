// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }
//         sort(a.begin(), a.end());
//         int min_time = 0;
//         for (int i = 0; i < n; ++i) {
//             min_time = max(min_time, min(a[i], n - i));
//         }
//         cout << min_time << '\n';
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int result = n; 

        for(int i = 0; i < n; i++){
            int timeNeed = a[i] + (n - i - 1);
            result = min(result, timeNeed);
        }

        cout << result << endl;
    }

    return 0;
}