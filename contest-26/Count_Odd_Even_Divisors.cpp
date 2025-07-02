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
        int oddDiv = 0,evenDiv = 0;
        for(int i = 1;i<=n;i++){
            if(n % i ==0){
                if(i % 2 ==0){
                    evenDiv++;
                }
                else{
                    oddDiv++;
                }
            }
        }
        cout << oddDiv << " " << evenDiv <<endl;
    }
    
    return 0;
}