#include<iostream>
using namespace std;
int dp[10001][3],n,a[10001];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        dp[i][0]=max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
        dp[i][1]=dp[i-1][0]+a[i];
        dp[i][2]=dp[i-1][1]+a[i];
    }
    cout<<max(dp[n][0],max(dp[n][1],dp[n][2]));
    return 0;
}