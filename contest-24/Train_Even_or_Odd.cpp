#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while (t--)
    {
        
        int n;
        cin>>n;
        int oddMax = 0,evenMax = 0;
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            if(i %2 ==0){
                evenMax +=x;
            }
            else{
                oddMax +=x;
            }
        }
        cout << max(oddMax,evenMax) <<endl;
    }
    
    return 0;
}