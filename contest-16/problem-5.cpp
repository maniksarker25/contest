#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string,int>mp;
    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        mp[s] = i;
    }
    priority_queue<pair<int,string>>pq;
    for(auto [x,y]:mp){
        pq.push({y,x});
    }

    while(!pq.empty()){
        string s = pq.top().second;
        cout << s.substr(s.size()-2);
        pq.pop();
    }
    cout << endl;

    return 0;
}