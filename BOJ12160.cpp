#include<iostream>
using namespace std;
int t,n,m[10],ans1,ans2,d,u;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>t; u=t;
    while(t--){
        cin>>n>>m[0]; ans1=ans2=d=0;
        for(int i=1;i<n;i++){
            cin>>m[i]; int dm=m[i-1]-m[i];
            d=max(d,dm);
            if(dm>0) ans1+=dm;
        }
        for(int i=0;i<n-1;i++) ans2+=min(m[i],d);
        cout<<"Case #"<<u-t<<": "<<ans1<<' '<<ans2<<'\n';
    }
    return 0;
}