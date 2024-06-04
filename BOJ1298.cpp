#include<iostream>
using namespace std;
bool cap[202][202],can;
int n,m,fl[202][202],p[202],ans;
void dfs(int nd){   
    if(nd==201) {can=1; return;}
    for(int i=1;i<202;i++) if(cap[nd][i]-fl[nd][i]>0&&p[i]==-1) { p[i]=nd; dfs(i); }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cap[0][i]=1;
        cap[i+100][201]=1;
    }
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        cap[a][b+100]=1;
    }
    while(1){
        for(int i=1;i<202;i++) p[i]=-1;
        can=0,dfs(0);
        if(can){
            for(int i=201;i;i=p[i]){
                fl[p[i]][i]++;
                fl[i][p[i]]--;
            }
            ans++;
        }
        else {cout<<ans; return 0;}
    }
    return 0;
}