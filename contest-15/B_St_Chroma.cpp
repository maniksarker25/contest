#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>> t;
    while(t--){
        int n,x;
        cin >> n >>x;
        vector<int>a;
        if(x ==0){
            for(int i = 1;i<n;i++){
                a.push_back(i);
            }
            a.push_back(0);
        }
        else if(n == x){
            for(int i = 0;i<n;i++){
                a.push_back(i);
            }
        }
        else{
            for(int i = 0;i<x;i++){
                a.push_back(i);
            }
            for(int i = x+1;i<n;i++){
                a.push_back(i);
            }
            a.push_back(x);
        }

        for(int i = 0;i<a.size();i++){
            cout << a[i] << ' ';
        }
        cout <<endl;
    }

    return 0;
}