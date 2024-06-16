#include<iostream>
using namespace std;
int t,h,x,dp[1<<10][11],map[11],str[9];
int cnt(int sta){
    int c=0;
    while(sta){
        if(sta&1) c++;
        sta>>=1;
    }
    return c;
}
int dfs(int sta,int idx){
    int &ref=dp[sta][idx],nextsta,stanum;
    if(ref!=-1) return ref;
    nextsta=map[idx+1];
    ref=stanum=cnt(sta);
    for(int i=0;i<x;i++) if(sta&(1<<i)){
        if(i-1>=0) nextsta|=(1<<(i-1));
        if(i+1<x) nextsta|=(1<<(i+1));
    }
    for(int i=0;i<(1<<x);i++){
        if(i&nextsta) continue;
        bool can=1;
        for(int j=0;j<9;j++) if(!(str[j]&(~i))) {can=0; break;}
        if(can) ref=max(ref,stanum+dfs(i,idx+1));
    }
    return ref;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    for(int i=0;i<9;i++) str[i]=(1<<i)*3;
    while(t--){
        cin>>h>>x;
        for(int i=0;i<(1<<x);i++) for(int j=0;j<=h;j++) dp[i][j]=-1;
        for(int i=1;i<=h;i++){
            int l=0;
            for(int j=0;j<x;j++){
                char a; cin>>a;
                if(a=='x') l|=1<<(x-1-j);
            }
            map[i]=l;
        }
        for(int i=0;i<(1<<x);i++) dp[i][h]=cnt(i);
        cout<<dfs(0,0)<<'\n';
    }
    return 0;
}