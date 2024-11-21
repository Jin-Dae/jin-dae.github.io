#include<iostream>
using namespace std;
int n,m,k,s[5001],ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++){
        char a; cin>>a; s[j]=s[j-1]+a-'0';
        if(j>=k&&s[j]-s[j-k]==0) ans++;
    }
    cout<<ans;
    return 0;
}