#include<iostream>
using namespace std;
int x[23],y[23],t,a,b,B,al,bl,ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    while(t--){
        cin>>B>>a>>b; al=bl=-1,ans=0;
        while(a){
            x[++al]=a%B;
            a/=B;
        }
        while(b){
            y[++bl]=b%B;
            b/=B;
        }
        for(int i=0,j=0,k=1;i<=al||j<=bl;i++,j++,k*=B){
            int s=0;
            if(i<=al) s+=x[i];
            if(j<=bl) s+=y[j];
            s%=B;
            ans+=k*s;
        }
        cout<<ans<<'\n';
    }
    return 0;
}