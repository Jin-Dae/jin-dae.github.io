#include<iostream>
#include<queue>
using namespace std;
int m,n,q,a,b,c;
bool v[501][501];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a][b]=v[b][a]=1;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>a>>b>>c;
        if(a==1) v[b][c]=v[c][b]=1;
        else v[b][c]=v[c][b]=0;
        cout<<"0 ";
        queue<int> qq;
        qq.push(1);
        int vis[501]={0,}; vis[1]=1;
        while(!qq.empty()){
            int now=qq.front(); qq.pop();
            for(int k=1;k<=n;k++){
                if(v[now][k]&&!vis[k]) {vis[k]=vis[now]+1; qq.push(k);}
            }
        }
        for(int j=2;j<=n;j++){
            if(vis[j]==0) cout<<"-1 ";
            else cout<<vis[j]-1<<' ';
        }
        cout<<'\n';
    }
    return 0;
}