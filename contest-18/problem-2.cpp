#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int red = 0 , blue = 0,other = 0;
        for(int i = 0;i<n;i++){
            cin >> a[i];
            if(a[i] == 1){
                red++;
            }
            else if(a[i] == 2){
                blue++;
            }
            else{
                other++;
            }
        }
        int lightNeed = abs(red-blue);
        if(other >= lightNeed && (other - lightNeed) % 2 == 0){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }

    return 0;
}