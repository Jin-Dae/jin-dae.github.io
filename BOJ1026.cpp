#include<iostream>
#include<algorithm>
using namespace std;
int a[50],b[50];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n,greater());
    sort(b,b+n);
    int s=0; for(int i=0;i<n;i++) s+=a[i]*b[i];
    cout<<s;
    return 0;
}
