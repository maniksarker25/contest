#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ,m;
    cin >> n >> m;
    int x , y;
    cin >> x >>y;
    
    int ans = (n * x ) + (m * y);
    cout << ans << endl;
    return 0;
}