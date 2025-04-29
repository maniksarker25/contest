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
        vector<int>b(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        for(int i = 0;i<n;i++){
            cin >> b[i];
        }

        int happyDays = 0;
        for(int i = 0;i<n;i++){
            if(a[i] <= b[i] * 2 && b[i] <= a[i] *2){
                happyDays++;
            }
        }
        cout << happyDays <<endl;
    }

    return 0;
}