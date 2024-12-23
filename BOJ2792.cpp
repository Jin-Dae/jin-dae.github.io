#include<iostream>
using namespace std;
int n,m,a[300000],ans=1234567899;
int func(int st,int ed){
    if(st>ed) return ans;
    int mid=(st+ed)/2,sum=0;
    for(int i=0;i<m;i++){
        if(a[i]%mid) sum+=a[i]/mid+1;
        else sum+=a[i]/mid;
    }
    if(sum>n) return func(mid+1,ed);
    else {ans=min(ans,mid); return func(st,mid-1);}
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>a[i];
    cout<<func(1,1000000000);
    return 0;
}