#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
    int x,y,k;
    cin >>x>>y>>k;
    if(x > k && y > k){
        cout << "Bob"<<endl;
    }
    else if(x >k*2 || y >k*2){
        cout << "Bob"<<endl;
    }
    else{
        cout << "Alice"<<endl;
    }
    
   }
    return 0;
}