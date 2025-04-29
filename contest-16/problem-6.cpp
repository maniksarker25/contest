#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >>q;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        while(q--){
            int l ,r;
            cin >> l >>r;
            int m = r - l +1;
            if(m % 2 == 0){
                cout << "NO"<<endl;
            }
            else{
                int freq[m] = {0};
                for(int i = l;i<r;i++){
                    freq[i]++;
                }
                bool posible = true;
                for(int i = 0;i<m;i++){
                    if(freq[i] > m /2){
                        cout << "NO"<<endl;
                        posible =false;
                        break;
                    }
                }
                if(posible){
                    cout << "YES"<<endl;
                }
                else{
                    cout << "NO"<<endl;
                }

            }
        }
    }
    
    return 0;
}