#include<iostream>
#include<utility>
#define h first
#define x second
using namespace std;
int dp[2][1002][1002],n,w;
pair<int,int> e[1002];
int dfs(int pol1,int pol2){
    int &temp=dp[0][pol1][pol2],next=max(pol1,pol2)+1,gopol,dis;
    if(next==1002) next=min(pol1,pol2)+1;
    if(next>w) return 0;
    if(temp!=2000000) return temp;
    gopol=pol1,dis=abs(e[gopol].h-e[next].h)+abs(e[gopol].x-e[next].x)+dfs(next,pol2);
    temp=min(temp,dis);
    gopol=pol2,dis=abs(e[gopol].h-e[next].h)+abs(e[gopol].x-e[next].x)+dfs(pol1,next);
    if(dis<temp) temp=dis,dp[1][pol1][pol2]=1;    
    return temp;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>w;
    for(int i=0;i<=1001;i++) for(int j=0;j<=1001;j++) dp[0][i][j]=2000000;
    e[0].h=1,e[0].x=1,e[1001].h=n,e[1001].x=n;
    for(int i=1;i<=w;i++) cin>>e[i].h>>e[i].x;
    cout<<dfs(0,1001)<<'\n';
    int now,p1=0,p2=1001;
    for(int i=1;i<=w;i++){
        now=dp[1][p1][p2]+1;
        cout<<now<<'\n';
        if(now==1) p1=i;
        else p2=i;   
    }
    return 0;
}