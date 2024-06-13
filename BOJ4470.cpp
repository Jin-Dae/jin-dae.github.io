#include<iostream>
#include<cstring>
using namespace std;
string a;
int n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n; cin.ignore();
    for(int i=1;i<=n;i++){
        string a;
        getline(cin,a);
        cout<<i<<". "<<a<<'\n';
    }
    return 0;
}