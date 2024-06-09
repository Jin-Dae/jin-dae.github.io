#include<iostream>
using namespace std;
int n,c,ca[1000],midx;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>c;
    for(int i=0;i<c;i++){
        int a; cin>>a; midx=0;
        for(int j=0;j<n;j++) if(ca[midx]>ca[j]) midx=j;
        ca[midx]+=a;
        cout<<midx+1<<' ';
    }
    return 0;
}