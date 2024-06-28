#include<iostream>
using namespace std;
int a[1001],n,q,b;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>q;
    for(int i=0;i<q;i++){
        int s,e; cin>>b>>s>>e;
        if(b==1){
            int k,cnt=0; cin>>k;
            for(int i=s;i<=e;i++) if(a[i]==k) cnt++;
            cout<<cnt<<'\n';
        }
        else for(int i=s;i<=e;i++) a[i]=0;
    }
    return 0;
}