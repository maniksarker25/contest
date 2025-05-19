#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        long long n,k,x;
        cin >> n >> k >>x;

        if(k>=64){
            cout << "NO"<<endl;
            continue;
        }

        long long xNeed = (1LL << (k-1));
        if(xNeed <= x){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    
    return 0;
}