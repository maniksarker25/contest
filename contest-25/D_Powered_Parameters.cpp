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
        vector<int>a(n);
        for(int i= 0;i<n;i++){
            cin >>a[i];
        }

        bool isGood = true;
        for(int i = 0;i<n;i++){
            if(a[i]<=4){
                isGood = false;
                break;
            }
        }
        if(isGood){
            cout << "YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
    
    return 0;
}