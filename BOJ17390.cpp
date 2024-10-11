#include<iostream>
#include<algorithm>
using namespace std;
int n,q,a[300000],s[300001];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>q;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<=n;i++) s[i]=s[i-1]+a[i-1];
    while(q--){
        int l,r; cin>>l>>r;
        cout<<s[r]-s[l-1]<<'\n';
    }
    return 0;
}