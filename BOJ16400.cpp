#include<iostream>
#include<vector>
using namespace std;
bool p[40001];
int n,dp[40001]={1,},pn;
vector<int> prime;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=2;i<=n;i++){
        if(!p[i]){
            prime.push_back(i); pn++;
            int a=i*2;
            while(a<=n){
                p[a]=1;
                a+=i;
            }
        }
    }
    for(int j=0;j<pn;j++){
        for(int i=prime[j];i<=n;i++){
            dp[i]+=dp[i-prime[j]];
            dp[i]%=123456789;
        }
    }
    cout<<dp[n];
    return 0;
}