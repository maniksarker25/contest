#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;
        vector<int>cokies(n);
        int minWaste = INT_MAX;
        bool isPosible = false;
        for(int i = 0;i<n;i++){
            cin >> cokies[i];
            if(cokies[i] >=k){
                int waste = cokies[i] % k;
                minWaste = min(waste,minWaste);
                isPosible = true;
            }
        }
        if(!isPosible){
            cout << -1 <<endl;
        }
        else{
            cout << minWaste << endl;
        }
        

       
    }

    return 0;
}