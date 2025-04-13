// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
        
//         vector<vector<int>> G(n, vector<int>(n));
//         map<int, vector<int>> sum_map;

//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < n; ++j) {
//                 int x;
//                 cin >> x;
//                 int s = (i + 1) + (j + 1); // because 1-based index
//                 sum_map[s].push_back(x);
//             }
//         }

//         vector<int> p(2 * n + 1); // 1-based indexing
//         set<int> used; // to track used numbers

//         for (int i = 2; i <= 2 * n; ++i) {
//             map<int, int> freq;
//             for (int val : sum_map[i]) {
//                 freq[val]++;
//             }
//             for (auto [val, count] : freq) {
//                 if (count >= 1) {
//                     p[i] = val;
//                     used.insert(val);
//                     break;
//                 }
//             }
//         }

//         // Now find p[1] = the number from 1 to 2n that is missing
//         for (int i = 1; i <= 2 * n; ++i) {
//             if (used.find(i) == used.end()) {
//                 p[1] = i;
//                 break;
//             }
//         }

//         for (int i = 1; i <= 2 * n; ++i) {
//             cout << p[i] << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }


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

        vector<int> uniqueValues;
        vector<bool> used(2 * n + 1, false);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int x;
                cin >> x;
                if (!used[x]) {
                    used[x] = true;
                    uniqueValues.push_back(x);
                }
            }
        }

        int missing = -1;
        for (int i = 1; i <= 2 * n; ++i) {
            if (!used[i]) {
                missing = i;
                break;
            }
        }

        cout << missing << " ";
        for (int val : uniqueValues) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
