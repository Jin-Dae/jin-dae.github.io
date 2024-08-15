#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        string c[21],ans[21];
        bool chk[21]={0, },setting[21]={0, };
        queue<string> q;
        for(int i=1;i<=a;i++) cin>>c[i];
        for(int i=0;i<b;i++){
            int d,e; cin>>d>>e;
            chk[d]=1; setting[e]=1; ans[e]=c[d];
        }
        for(int i=1;i<=a;i++) if(!chk[i]) q.push(c[i]);
        for(int i=1;i<=a;i++) if(!setting[i]) {ans[i]=q.front(); q.pop();}
        for(int i=1;i<=a;i++) cout<<ans[i]<<' ';
        cout<<'\n';
    }
    return 0;
}