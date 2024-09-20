#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int m,k,c,all,ans; cin>>m;
    for(int i=0;i<m;i++){
        string a,b; cin>>k>>a>>b; all=a.length(); c=0;
        for(int j=0;j<all;j++) if(a[j]==b[j]) c++;
        if(c<k) cout<<c+all-k;
        else cout<<k+all-c;
        cout<<'\n';
    }
    return 0;
}