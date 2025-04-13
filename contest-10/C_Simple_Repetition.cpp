#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;
    while(t--){
        int x,k;
        cin >>x>>k;
        string str;
        for(int i = 1;i<=k;i++){
            str += to_string(x);
        }
        long long num = 0;
        for(auto ch : str){
            num = num * 10 +(ch - '0');
        }
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        } else {
            for (long long i = 2; i  * i<= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }

    }

    return 0;
}
