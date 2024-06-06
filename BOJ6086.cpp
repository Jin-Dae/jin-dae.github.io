#include<iostream>
#include<queue>
using namespace std;
int fl[52][52],cap[52][52],n,ans,p[52];
int ctoi(char c){
    if(c<='Z') return c-'A';
    else return c-'a'+26;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        char a,b; int k;
        cin>>a>>b>>k;
        if(a==b) continue;
        cap[ctoi(a)][ctoi(b)]+=k;
        cap[ctoi(b)][ctoi(a)]+=k;
    }
    while(1){
        for(int i=1;i<52;i++) p[i]=-1;
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int f=q.front(); q.pop();
            if(p[25]!=-1) break;
            for(int i=0;i<52;i++){
                if(cap[f][i]-fl[f][i]>0&&p[i]==-1) {p[i]=f; q.push(i);}
            }
        }
        if(p[25]==-1) break;
        else{
            int nflow=1001;
            for(int i=25;i;i=p[i]) nflow=min(nflow,cap[p[i]][i]-fl[p[i]][i]);
            for(int i=25;i;i=p[i]) fl[p[i]][i]+=nflow,fl[i][p[i]]-=nflow;
            ans+=nflow;
        }
    }
    cout<<ans;
    return 0;
}