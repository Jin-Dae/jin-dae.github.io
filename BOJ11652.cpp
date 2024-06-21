#include<iostream>
#include<map>
#define ll long long
using namespace std;
map<ll,int> m;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n; ll maxnum=1ll<<62;
    for(int i=0;i<n;i++){
        ll a; cin>>a;
        if(++m[a]>m[maxnum]) maxnum=a;
        else if(m[a]==m[maxnum]) maxnum=a<maxnum?a:maxnum;
    }
    cout<<maxnum;
    return 0;
}