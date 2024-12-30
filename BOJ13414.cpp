#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int n,m,cnt;
map<string,int> list;
string b[500001];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        string a; cin>>a; list[a]=i; b[i]=a;
    }
    for(int i=1;i<=m;i++){
        if(list[b[i]]==i) {cout<<b[i]<<'\n'; cnt++;}
        if(cnt==n) return 0;
    }
    return 0;
}