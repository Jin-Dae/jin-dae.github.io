#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a[50],n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    if(a[0]+a[2]==2*a[1]) cout<<a[n-1]+a[1]-a[0];
    else cout<<a[1]/a[0]*a[n-1];
    return 0;
}