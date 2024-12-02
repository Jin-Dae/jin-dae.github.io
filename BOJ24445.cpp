#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int n,m,r,v[100001],cnt;
vector<int>nd[100001];
queue<int> q;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>r; q.push(r); v[r]=++cnt;
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        nd[a].push_back(b);
        nd[b].push_back(a);
    }
    for(int i=1;i<=n;i++) sort(nd[i].begin(),nd[i].end(),greater<int>());
    while(!q.empty()){
        int now=q.front(); q.pop();
        for(int i=0;i<nd[now].size();i++){
            if(!v[nd[now][i]]) q.push(nd[now][i]),v[nd[now][i]]=++cnt;
        }
    }
    for(int i=1;i<=n;i++) cout<<v[i]<<'\n';
    return 0;
}