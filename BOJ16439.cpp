#include<iostream>
using namespace std;
int n,m,pr[30][30],sat[30],ans;
void func(int num,int s,const int a[30]){
    if(num==3){
        int sum=0;
        for(int i=0;i<n;i++) sum+=a[i];
        ans=max(sum,ans);
        return;
    }
    else if(s==m) return;   
    for(int j=s;j<m;j++){
        int b[30];
        for(int i=0;i<n;i++) b[i]=max(pr[i][j],a[i]);
        func(num+1,j+1,b);
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>pr[i][j];
    func(0,0,sat);
    cout<<ans;
    return 0;
}