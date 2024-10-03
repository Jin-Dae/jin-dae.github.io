#include<iostream>
using namespace std;
int M[100001][2][2],h,x,n,ansi;
long long ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>h>>x>>n;
    for(int i=1;i<=n;i++) M[i][0][0]=M[i][1][0]=100001;
    for(int i=0;i<n;i++){
        int a,b,c; cin>>a>>b>>c;
        M[a][0][0]=min(b,M[a][0][0]);
        M[a][0][1]=max(b,M[a][0][1]);
        M[a][1][0]=min(c,M[a][1][0]);
        M[a][1][1]=max(c,M[a][1][1]);
    }
    for(int i=n;i>=1;i--){
        if(M[i][0][0]==100001) continue;
        long long s=((long long)M[i][0][1]-M[i][0][0]+1)*(M[i][1][1]-M[i][1][0]+1);
        if(ans<=s) ans=s,ansi=i;
    }
    cout<<ansi<<' '<<ans;
    return 0;
}