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
        cin >>n;
        int ans = 0,prev = -1;
        for(int i = 0;i<n;i++){
            int x;
            cin >>x;

            if(i==0){
                prev = x;
                ans++;
            }
            else if(x - prev >=2){
                prev =x;
                ans++;
            }
            // or use that
            // if(x > prev){
            //     prev = x + 1;
            //     ans++;
            // }
        }
        cout << ans <<endl;
    }
    
    return 0;
}