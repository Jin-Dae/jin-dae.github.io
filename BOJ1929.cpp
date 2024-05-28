#include<iostream>
using namespace std;
bool prime[1000001];
int m,n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>m>>n;
    for(int i=2;i<=n;i++){
        if(prime[i]) continue;
        if(m<=i) cout<<i<<'\n';
        int a=i;
        while(a<=n){
            prime[a]=1;
            a+=i;
        }
    }
    return 0;
}