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
        cin >> n;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        int totalNegitiveCount = 0;
        int total = 0;
        for(int i = 0;i<n;i++){
            if(a[i] < 0){
                totalNegitiveCount++;
            }
            else{
                total += a[i];
            }
        }
        if(total == 0){
            cout << 0 << endl;
        }
        else{
            cout << totalNegitiveCount << endl;
        }
    }

    return 0;
}