#include<iostream>
using namespace std;
long long a[101]={0,1,1,1,2,2,};
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for(int i=6;i<101;i++) a[i]=a[i-1]+a[i-5];
    int t,n; cin>>t;
    while(t--){
        cin>>n; cout<<a[n]<<'\n';
    }
    return 0;
}