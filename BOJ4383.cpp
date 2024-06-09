#include<iostream>
using namespace std;
bool vis[2999];
int n,a,b;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(cin>>n>>a){
        for(int i=0;i<n;i++) vis[i]=0;
        for(int i=0;i<n-1;i++){
            b=a; cin>>a;
            if(a==b) vis[0]=1;
            else if(!vis[abs(a-b)]) vis[abs(a-b)]=1;
            else vis[0]=1;
        }
        if(vis[0]) cout<<"Not jolly\n";
        else cout<<"Jolly\n";
    }
    return 0;
}