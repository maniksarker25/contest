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
        cin>>n;
        vector<int>a(n);
        int zeroCount = 0;
        int oneCount = 0;
        for(int i = 0;i<n;i++){
            cin >>a[i];
            if(a[i] ==0){
                zeroCount++;
            }
            else{
                oneCount++;
            }
        }

       int ans = min(oneCount,zeroCount);
       cout << ans << endl;
    }
    
    return 0;
}