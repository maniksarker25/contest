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
        vector<int>a(n);
        int count_one = 0;
        int count_two = 0;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            if(a[i] == 1){
                count_one++;
            }
            else{
                count_two++;
            }
        }

        int ans = 0;

        if(count_one % 2 ==0){
            ans = min(count_two,count_one/2);
        }
        else{
            ans = count_two;
        }

        cout << ans <<endl;
    }

    return 0;
}