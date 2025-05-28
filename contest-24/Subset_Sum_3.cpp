// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         int cnt0 = 0, cnt1 = 0, cnt2 = 0;
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//             int mod = a[i] % 3;
//             if (mod == 0) {
//                 cnt0++;
//             } else if (mod == 1) {
//                 cnt1++;
//             } else {
//                 cnt2++;
//             }
//         }
        
//         if (cnt0 > 0) {
//             cout << "Yes\n";
//         } else if (cnt1 >= 1 && cnt2 >= 1) {
//             cout << "Yes\n";
//         } else if (cnt1 >= 3) {
//             cout << "Yes\n";
//         } else if (cnt2 >= 3) {
//             cout << "Yes\n";
//         } else {
//             cout << "No\n";
//         }
//     }
    
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        bool isPosible = false;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum += a[j];
                if(sum % 3 == 0){
                    isPosible = true;
                    break;
                }
            }
        }
        if(isPosible){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    
    return 0;
}





   