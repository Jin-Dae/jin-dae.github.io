#include<iostream>
using namespace std;
int dp[20][2],n,j[19][2],k;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n-1;i++) cin>>j[i][0]>>j[i][1];
    cin>>k;
    for(int i=1;i<=n;i++) dp[i][0]=dp[i][1]=987654321;
    for(int i=1;i<n;i++){
        if(i-1>=0) dp[i][0]=min(dp[i-1][0]+j[i-1][0],dp[i][0]),dp[i][1]=min(dp[i-1][1]+j[i-1][0],dp[i][1]);
        if(i-2>=0) dp[i][0]=min(dp[i-2][0]+j[i-2][1],dp[i][0]),dp[i][1]=min(dp[i-2][1]+j[i-2][1],dp[i][1]);
        if(i-3>=0) dp[i][1]=min(dp[i-3][0]+k,dp[i][1]);
    }
    cout<<min(dp[n-1][0],dp[n-1][1]);
    return 0;
}
