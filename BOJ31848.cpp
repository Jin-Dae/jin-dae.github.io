#include<iostream>
#include<vector>
using namespace std;
int a,n,q,b;
vector<int> v;
int bs(int st,int ed,int tg){
    if(st>=ed) return ed;
    int mid=(st+ed)/2;
    if(v[mid]<tg) return bs(mid+1,ed,tg);
    else return bs(st,mid,tg);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a; b=max(b,a+i-1);
        v.push_back(b);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>a;
        cout<<bs(0,n-1,a)+1<<' ';
    }
    return 0;
}