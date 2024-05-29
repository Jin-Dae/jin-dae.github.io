#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,b; cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++){
        string a; cin>>a;
        if(a=="push") {cin>>b; q.push(b);}
        else if(a=="front"){
            if(q.empty()) cout<<-1<<'\n';
            else cout<<q.front()<<'\n';
        }
        else if(a=="back"){
            if(q.empty()) cout<<-1<<'\n';
            else cout<<q.back()<<'\n';
        }
        else if(a=="empty"){
            if(q.empty()) cout<<1<<'\n';
            else cout<<0<<'\n';
        }
        else if(a=="size") cout<<q.size()<<'\n';
        else{
            if(q.empty()) cout<<-1<<'\n';
            else{
                cout<<q.front()<<'\n';
                q.pop();
            }
        }
    }
    return 0;
}