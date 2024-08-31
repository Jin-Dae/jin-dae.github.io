//https://www.acmicpc.net/problem/15761
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,a[100000],ans; cin>>n; ans=n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater());
    for(int i=0;i<n;i++) if(a[i]<i) {ans=i; break;}
    cout<<ans;
    return 0;
}