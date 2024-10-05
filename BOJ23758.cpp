//https://www.acmicpc.net/problem/23758
#include<iostream>
#include<algorithm>
using namespace std;
int ipt[2*1000000],n,ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>ipt[i];
    sort(ipt,ipt+n);
    for(int i=0;i<(n+1)/2;i++){
        while(ipt[i]!=1){
            ipt[i]/=2;
            ans++;
        }
    }
    cout<<ans+1;
    return 0;
}