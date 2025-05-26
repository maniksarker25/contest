#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin>> n >>k;
        string s;
        cin >>s;
        int zeroCount = 0,oneCount= 0;
        for(char c : s){
            if(c == '0'){
                zeroCount++;
            }
            else{
                oneCount++;
            }
        }

        
    }
    
    return 0;
}

