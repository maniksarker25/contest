#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n),b(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        for(int i = 0;i<n;i++){
            cin >> b[i];
        }

        int maxSatisfiction = 0;
        for(int l = 1;l<=100;l++){
            int total = 0;
            for(int i = 0;i<n;i++){
                if(b[i] <=l && a[i] >0){
                    total+= a[i];
                }

            }

            int satisfiction = total - l;
            maxSatisfiction = max(maxSatisfiction,satisfiction);
        }
        cout << maxSatisfiction << endl;
    }
    
    return 0;
}