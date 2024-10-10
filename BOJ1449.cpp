#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,l,a[1000],now=0,ans=0; cin>>n>>l;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) if(now<a[i]) {now=a[i]+l-1; ans++;}
    cout<<ans;
    return 0;
}