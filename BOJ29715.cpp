#include<iostream>
using namespace std;
int n,m,x,y,cnt,nn=9,ans;
int comb(int c,int d){
    int cc=1,div=1;
    for(int i=0;i<d;i++) cc*=c--;
    for(int i=1;i<=d;i++) div*=i;
    cc/=div;
    return cc;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>x>>y;
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        if(a) n--,nn--;
        else cnt++,nn--;
    }
    ans=comb(n,cnt);
    for(int i=1;i<=cnt;i++) ans*=i;
    for(int i=0;i<n-cnt;i++) ans*=nn--;
    if(ans%3) ans=ans*x+(ans/3)*y;
    else ans=ans*x+(ans/3-1)*y;
    cout<<ans;
    return 0;
}
