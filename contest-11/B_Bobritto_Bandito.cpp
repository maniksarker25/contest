#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,m,l,r;
        cin >> n >> m >> l >> r;
        int count = 1;
        int difference = n -m;
        for(int i = 1;i<=difference;i++){
           if(count % 2 == 0){
            if(l != 0){
                l++;
            }
            else {
                r--;
            }
           }
           else{
            if(r != 0){
                r--;
            }
            else{
                l++;
            }
           }
           count++;
        }
        cout << l << ' ' << r << endl;
    }
    
    return 0;
}