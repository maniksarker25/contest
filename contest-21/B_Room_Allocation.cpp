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
        int roomNeed = 0;
        for(int i = 0;i<n;i++){
            cin >>a[i];
            int need = ceil((double)a[i] / 2);
            roomNeed += need;
        }
        cout << roomNeed << endl;
    }


    
    return 0;
}