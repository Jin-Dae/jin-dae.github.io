#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n,m;
vector<int> v[101];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        queue<int> q;
        q.push(i);
        int visit[101]={0};
        visit[i]=1;
        while(!q.empty()){
            int now=q.front(); q.pop();
            for(int j=0;j<v[now].size();j++){
                if(!visit[v[now][j]]){
                    visit[v[now][j]]=visit[now]+1;
                    q.push(v[now][j]);
                }
            }
        }
        for(int j=1;j<=n;j++){
            if(visit[j]>7||!visit[j]){
                cout<<"Big World!";
                return 0;
            }
        }
    }
    cout<<"Small World!";
    return 0;
}