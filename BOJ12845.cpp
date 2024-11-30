#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,l,ans=0,MAX=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l; MAX=max(MAX,l);
        ans+=l;
    }
    ans+=MAX*(n-2);
    cout<<ans;
    return 0;
}