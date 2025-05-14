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
        int minCost = INT_MAX;
        for(int i = 0;i<n;i++){
            int x,y;
            cin >>x >>y;
            if(x >= 7){
                minCost = min(minCost,y);
            }
        }

        if(minCost == INT_MAX){
            cout << -1 <<endl;
        }
        else{
            cout << minCost << endl;
        }
    }
    
    return 0;
}