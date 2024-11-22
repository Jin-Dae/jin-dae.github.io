#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,x,y,sc,s[100],t;
string a;
int main(){
    cin>>n>>m>>x>>y>>a>>sc;
    for(int i=0;i<n-1;i++){
        cin>>a>>t;
        if(a[2]=='2'&&a[3]=='4') s[i]=t+max(y-(x-t),0);
    }
    sort(s,s+99,greater<int>());
    if(s[m-1]>sc+y) cout<<"NO";
    else{
        cout<<"YES\n";
        cout<<max(s[m-1]-sc,0);
    }
}