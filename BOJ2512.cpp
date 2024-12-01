#include<iostream>
using namespace std;    
int n,m,a[10000],sum,MAX,ans;
void func(int s,int e){
    if(s>e) return;
    int mid=(s+e)/2,ss=0;
    for(int i=0;i<n;i++) ss+=min(mid,a[i]);
    if(m<ss) func(s,mid-1);
    else {ans=max(ans,mid); func(mid+1,e);}
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i],sum+=a[i],MAX=max(MAX,a[i]);
    cin>>m;
    if(sum<=m) cout<<MAX;
    else {func(1,100000); cout<<ans;}
    return 0;
}