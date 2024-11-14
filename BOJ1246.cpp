#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,a[1000],MAX=0,ans;
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m,greater<int>());
    for(int i=0;i<m;i++) if(MAX<a[i]*min(n,i+1)) MAX=a[i]*min(n,i+1),ans=a[i];
    cout<<ans<<' '<<MAX;
    return 0;
}