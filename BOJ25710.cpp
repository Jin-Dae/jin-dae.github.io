#include<iostream>
using namespace std;
int n,ans,a[1000];
int sum(int a){
    int s=0;
    while(a){
        s+=a%10;
        a/=10;
    }
    return s;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        int b; cin>>b; a[b]++;
    }
    for(int i=1;i<=999;i++) for(int j=1;j<=999;j++){
        if(i==j&&a[i]>1) ans=max(sum(i*j),ans);
        else if(i!=j&&a[i]&&a[j]) ans=max(sum(i*j),ans);
    }
    cout<<ans;
    return 0;
}