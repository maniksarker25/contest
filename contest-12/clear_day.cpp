#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin >> x >>y;
    int clearDay = 7 - (x+y);
    cout << clearDay<< endl;
    
    return 0;
}