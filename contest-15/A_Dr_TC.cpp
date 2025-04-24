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
        string s;
        cin >> s;
        int count = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(i == j){
                    if(s[j] == '0'){
                        count++;
                    }
                    else{
                        count--;
                    }
                }
                if(s[j] == '1'){
                    count++;
                }
            }
        }
        cout << count <<endl;
    }   
    return 0;
}