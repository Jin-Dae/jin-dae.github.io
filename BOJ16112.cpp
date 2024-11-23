#include<iostream>
#include<algorithm>
using namespace std;
long long ans=0;
int a[300000],n,k;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) ans+=(long long)min(i,k)*a[i];
    cout<<ans;
    return 0;
}