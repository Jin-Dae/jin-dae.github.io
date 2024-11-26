#include<iostream>
using namespace std;
long long xs,ys,n,b,g;
long long gcd(long long a1,long long a2){
    return a1%a2?gcd(a2,a1%a2):a2;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>b;
    for(int i=0;i<n;i++){
        int xi,yi; cin>>xi>>yi;
        xs+=xi,ys+=yi;
    }
    ys-=n*b;
    if(xs==0) cout<<"EZPZ";
    else if(ys%xs){
        if((xs<0&&ys>0)||(xs>0&&ys<0)) cout<<'-';
        xs=xs<0?-xs:xs;
        ys=ys<0?-ys:ys;
        g=gcd(xs,ys);
        cout<<ys/g<<'/'<<xs/g;
    } 
    else cout<<ys/xs;
    return 0;
}