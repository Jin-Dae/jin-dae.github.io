#include<iostream>
#include<algorithm>
using namespace std;
int a[50],n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cout<<a[0]*a[n-1];
    return 0;
}