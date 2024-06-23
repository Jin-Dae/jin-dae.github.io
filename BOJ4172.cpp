#include<iostream>
#include<cmath>
using namespace std;
int dp[1000001]={1,};
int dfs(int a){
    if(dp[a]) return dp[a];
    dp[a]=(dfs((int)(a-sqrt(a)))+dfs((int)(log(a)))+dfs((int)(a*sin(a)*sin(a))))%1000000;
    return dp[a];
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(1){
        int b; cin>>b;
        if(b==-1) return 0;
        cout<<dfs(b)<<'\n';
    }
}