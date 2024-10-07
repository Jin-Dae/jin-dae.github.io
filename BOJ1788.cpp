//https://www.acmicpc.net/problem/1788
#include<iostream>
using namespace std;
int f[2000001],n;
int fib(int a){
    if(f[a]!=1000000001) return f[a];
    if(a<1000000) f[a]=fib(a+2)-fib(a+1);
    else f[a]=fib(a-1)+fib(a-2);
    if(f[a]<0) return f[a]=-(-f[a]%1000000000);
    else return f[a]%=1000000000;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for(int i=0;i<2000002;i++) f[i]=1000000001;
    f[1000000]=0,f[1000001]=1;
    cin>>n; fib(n+1000000);
    if(f[n+1000000]>0) cout<<1;
    else if(f[n+1000000]<0) cout<<-1;
    else cout<<0;
    cout<<'\n';
    if(f[n+1000000]>0) cout<<f[n+1000000];
    else cout<<-f[n+1000000];
    return 0;
}