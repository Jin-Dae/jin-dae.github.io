#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m,vs,b[8];
bool chk[10001];
vector<int> v;
void dfs(int cnt,int idx){
    if(cnt==m){
        for(int i=0;i<m;i++) cout<<b[i]<<' ';
        cout<<'\n';
        return;
    }
    for(int i=idx;i<vs;i++){
        b[cnt]=v[i];
        dfs(cnt+1,i);
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        if(!chk[a]) {chk[a]=1; v.push_back(a);}
    }
    vs=v.size();
    sort(v.begin(),v.end());
    dfs(0,0);
    return 0;
}