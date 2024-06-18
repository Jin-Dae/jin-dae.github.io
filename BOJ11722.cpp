#include<iostream>
using namespace std;
int a[1001]={1001,},dp[1001],n,ans=1;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        for(int j=i-1;j>=0;j--) if(a[i]<a[j]) dp[i]=max(dp[i],dp[j]+1);
        ans=max(ans,dp[i]);
    } 
    cout<<ans;
    return 0;
}