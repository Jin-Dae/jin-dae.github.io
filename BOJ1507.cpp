#include<iostream>
using namespace std;
int n,dis[21][21],sumdis;
bool a[21][21];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>dis[i][j];
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(i==k||j==k) continue;
                int b=dis[i][j],c=dis[i][k]+dis[k][j];
                if(b==c) {a[i][j]=1; break;}
                else if(b>c){cout<<-1; return 0;}
            }
        }
    }
    for(int i=1;i<=n;i++) for(int j=i+1;j<=n;j++) if(!a[i][j]) sumdis+=dis[i][j];
    cout<<sumdis;
    return 0;
}