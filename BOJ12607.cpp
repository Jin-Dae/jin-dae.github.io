#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,b[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9},c[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4}; string a;
    cin>>n; cin.ignore(1);
    for(int i=1;i<=n;i++){
        cout<<"Case #"<<i<<": ";
        getline(cin,a);
        for(int j=0;j<a.length();j++){
            if(a[j]==' ') cout<<0;
            else for(int k=0;k<c[a[j]-'a'];k++) cout<<b[a[j]-'a'];
            if(b[a[j+1]-'a']==b[a[j]-'a']) cout<<' ';         
        }
        cout<<'\n';
    }
    return 0;
}