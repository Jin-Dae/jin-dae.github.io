#include<iostream>
using namespace std;
int comb(int a,int b){
    int res=1;
    for(int i=0;i<b;i++) res*=a-i;
    for(int i=1;i<=b;i++) res/=i;
    return res;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m,k,ans=0; cin>>n>>m>>k;
    for(int i=k;i<=m;i++) ans+=comb(m,i)*comb(n-m,m-i);
    cout.precision(9);
    cout<<(double)ans/comb(n,m);
    return 0;
}