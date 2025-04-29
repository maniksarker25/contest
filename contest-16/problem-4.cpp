#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >>m;
        vector<int>a(n);
        vector<int>b(m);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        int maxSuffixLength = 0;
        for(int i =0;i<m;i++){
            cin >> b[i];
            maxSuffixLength = max(maxSuffixLength,b[i]);
        }

        sort(a.end() - maxSuffixLength,a.end());
        for(int i = 0;i<n;i++){
            cout << a[i]<< ' ';
        }
        cout << endl;
    }
    
    return 0;
}