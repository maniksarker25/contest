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
        int mx = 0,x,count = 0;
        for(int i = 0;i<n;i++){
            cin >>x;
            if(x > mx){
                mx =x;
            }
            else{
                count++;
            }
        }
        cout << count <<endl;
        
    }
    
    return 0;
}