#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        string a; cin>>a;
        cout<<a[0]<<a[a.length()-1]<<'\n';
    }
    return 0;
}