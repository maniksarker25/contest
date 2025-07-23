#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while (t--)
    {
        int n,c;
        cin >> n >>c;
        vector<int>a(n);    
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        
        int extraNeed = 0;
        while(1){
            bool lessHave = false;
            bool equalHave = false;
            for(int i = 0;i<n;i++){
                if(a[i] < c){
                    lessHave = true;
                }
                if(a[i]== c){
                    equalHave = true;
                }
            }
            if(lessHave  && !equalHave){
               break;
            }
            c++;
            extraNeed++;
        }
        cout << extraNeed << endl;

        
    }
    
    return 0;
}