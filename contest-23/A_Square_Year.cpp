#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
    string s;
    cin >>s;
    int year = 0;
    for(char ch:s){
        year = year * 10 +(ch-'0');
    }

    int sum = sqrt(year);
    if(sum * sum != year){
        cout << -1 << endl;
        continue;
    }
    cout << "0 " << sum << endl;
    }
    
    return 0;
}