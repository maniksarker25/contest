#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int h,x,y;
        cin >> h >> x >>y;
        h -= y;
        int count =  (h + x - 1) / x;
        cout <<  count + 1 <<endl;
    }
    
    return 0;
}