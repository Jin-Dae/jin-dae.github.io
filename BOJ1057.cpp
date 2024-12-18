#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,a,b,cnt=0; cin>>n>>a>>b;
    while(1){
        a=(a+1)/2,b=(b+1)/2;
        cnt++;
        if(a==b) {
            cout<<cnt;
            return 0;
        }
    }
    return 0;
}