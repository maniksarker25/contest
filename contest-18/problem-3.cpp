#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n,h;
        cin>>n>>h;
        long long oneSecWeaMax = 0 , twoSecWeaMax = 0;
        for(int i = 0;i<n;i++){
            long long s,d;
            cin >>s >>d;
            if(s == 1){
                oneSecWeaMax = max(oneSecWeaMax,d);
            }
            else{
                twoSecWeaMax = max(twoSecWeaMax,d);
            }
        }
        
        if(h <= oneSecWeaMax){
            cout << 1 <<endl;
        }
        else if(h <= twoSecWeaMax){
            cout << 2 <<endl;
        }
        else{
            if(twoSecWeaMax > oneSecWeaMax * 2){
                int atteckNeed = h / twoSecWeaMax;
                if( twoSecWeaMax * atteckNeed == h){
                    cout << atteckNeed * 2 <<endl;
                }
                else if(twoSecWeaMax * atteckNeed + oneSecWeaMax >= h){
                    cout << atteckNeed * 2 + 1 <<endl;
                }
                else{
                    cout << atteckNeed * 2 + 2 <<endl;
                }
            }
            else{
                int atteckNeed = h  / oneSecWeaMax;
                if(atteckNeed * oneSecWeaMax == h){
                    cout << atteckNeed <<endl;
                }
                else{
                    cout << atteckNeed + 1 <<endl;
                }
            }
        }

    }
    
    return 0;
}