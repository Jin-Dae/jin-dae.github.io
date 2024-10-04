#include<iostream>
#include<cstring>
using namespace std;
int n,a[3],ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        string b; cin>>b;
        if(b[0]=='3') a[2]--,ans++;
        else if(b[2]=='2') a[1]++;
        else a[2]++;
    }
    if(a[1]%2) ans+=a[1]/2+1,a[2]-=2;
    else ans+=a[1]/2;
    if(a[2]>0){
        if(a[2]%4) ans+=a[2]/4+1;
        else ans+=a[2]/4;
    }
    cout<<ans;
    return 0;
}