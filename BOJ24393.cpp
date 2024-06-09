#include<iostream>
using namespace std;
int lsum,rsum,n,jok=1;
bool isl,isok;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    while(n){
        int a; cin>>a;
        if(isl) lsum+=a,isl=0;
        else rsum+=a,isl=1;
        if(!isok&&jok>13&&rsum>=jok-13) jok+=lsum-13,isok=1;
        else if(!isok&&jok<=13&&lsum>=jok) jok+=rsum,isok=1;
        if(lsum+rsum==27) lsum=0,rsum=0,isl=0,n--,isok=0;
    }
    cout<<jok;
    return 0;
}