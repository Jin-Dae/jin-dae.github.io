#include<iostream>
#include<vector>
#define ll long long
using namespace std;
struct node{
    int to, cost;
}a;
int depth[100001],n,p[100001][18],m,k;
vector<node> v[100001];
bool visit[100001];
ll sc[100001][18];
void dfs(int now){
    visit[now]=1;
    for(int i=1;i<18;i++) {
        p[now][i]=p[p[now][i-1]][i-1];
        sc[now][i]=sc[now][i-1]+sc[p[now][i-1]][i-1];
    }
    for(int i=0;i<v[now].size();i++){
        int next=v[now][i].to;
        if(!visit[next]) sc[next][0]=v[now][i].cost,p[next][0]=now,depth[next]=depth[now]+1,dfs(next);
    }       
}
int find_lca(int c,int d){
    if(depth[c]<depth[d]) swap(c,d);
    int difd=depth[c]-depth[d],w=0;
    while(difd){
        if(difd&1) c=p[c][w];     
        w++;
        difd>>=1;
    }
    if(c==d) return c;
    for(int i=17;i>=0;i--){
        if(p[c][i]!=p[d][i]) c=p[c][i],d=p[d][i];
    }
    return p[c][0];
}
ll q1(int x,int y){
    ll sum=0;
    int l=find_lca(x,y);
    int difd=depth[x]-depth[l],w=0;
    while(difd){
        if(difd&1){
            sum+=sc[x][w];
            x=p[x][w];
        }
        w++;
        difd>>=1;
    }
    difd=depth[y]-depth[l],w=0;
    while(difd){
        if(difd&1){
            sum+=sc[y][w];
            y=p[y][w];
        }
        w++;
        difd>>=1;
    }
    return sum;
}
int q2(int x,int y){
    int l=find_lca(x,y),FRL=depth[x]-depth[l],w=0;
    if(--k<FRL){
        while(k){
            if(k&1) x=p[x][w];
            w++;
            k>>=1;
        }
        return x;
    }
    else if(k==FRL) return l;
    else{
        k-=FRL,k=depth[y]-depth[l]-k;
        while(k){
            if(k&1) y=p[y][w];
            w++;
            k>>=1;
        }
        return y;
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<n;i++){
        int b,c; cin>>b>>a.to>>a.cost;
        v[b].push_back(a);
        c=a.to,a.to=b;
        v[c].push_back(a);
    }
    dfs(1);
    cin>>m;
    while(m--){
        int q,b,c; cin>>q;
        if(q==1){
            cin>>b>>c;
            cout<<q1(b,c)<<'\n';
        }
        else{
            cin>>b>>c>>k;
            cout<<q2(b,c)<<"\n";
        }
    }
    return 0;
}
