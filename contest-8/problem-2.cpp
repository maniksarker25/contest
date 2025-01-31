#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string s;
    int i;
    Student(string s, int i){
        this->s = s;
        this->i = i;
    }
};


class cmp {
    public:
    bool operator()(Student l , Student r){
        if(l.s > r.s){
            return true;
        }
        else if(l.s < r.s){
            return false;
        }
        else {
            return l.i < r.i;
        }
    }
};

int main(){
    priority_queue<Student,vector<Student>,cmp>pq;
    int n;
    cin >>n;
    for(int i =0;i<n;i++){
        string s;
        int x;
      cin >> s >> x;
      Student obj(s,x);
      pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().s << " " << pq.top().i << endl;
        pq.pop();
    }
    

    return 0;
}