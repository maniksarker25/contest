#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;
        vector<int>a(n);
        int totalChocolate = 0;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            totalChocolate += a[i];
        }

        if(totalChocolate < n){
            cout << "NO"<<endl;
        }
        else if(k < 1 && totalChocolate % n > 0){
            cout << "NO"<< endl;
        }
        else{
            cout << "YES"<<endl;
        }


    }

    return 0;
}