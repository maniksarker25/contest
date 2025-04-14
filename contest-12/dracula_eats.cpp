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
        cin >>n;
        if(n < 2){
            cout << 0 << endl;
        }
        else if(n == 2){
            cout << 1 << endl;
        }
        else {
            int days = n -2;
            int tem_ans = days / 7;
            int ans = tem_ans + 1;
            cout << ans <<endl;
        }
    }

    return 0;
}