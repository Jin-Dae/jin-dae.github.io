#include<iostream>
using namespace std;
int sum[5001][5001],n,q;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++){
        int a; cin>>a; sum[i][j]=sum[i][j-1]+a;
    }
    cin>>q;
    while(q--){
        int a1,a2,b1,b2,ans=0; cin>>a1>>b1>>a2>>b2;
        for(int i=a1;i<=a2;i++){
            if(i==a1||i==a2) ans-=sum[i][b2]-sum[i][b1-1];
            else{
                ans-=sum[i][b1]-sum[i][b1-1]+sum[i][b2]-sum[i][b2-1];
                ans+=sum[i][b2-1]-sum[i][b1];
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}