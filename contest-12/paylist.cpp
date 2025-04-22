#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n,k,l;
        cin >> n >> k >>l;
        vector<pair<int,int>>songs;
        for(int i =1;i<=n;i++){
            int m,l;
            cin >> m >> l;
            songs.push_back({m,l});
        }
       
        vector<int>paylist_songs;
        for(auto [x,y]:songs){
            if(y == l){
                paylist_songs.push_back(x);
            }
        }

        if(paylist_songs.size() < k){
            cout << -1 <<endl;
        }
        else{
            sort(paylist_songs.begin(),paylist_songs.end(),greater<int>());
            int total_length = 0;
            for(int i = 0;i<k;i++){
                total_length += paylist_songs[i];
            }
            cout << total_length <<endl;
        }

    }
    
    return 0;
}