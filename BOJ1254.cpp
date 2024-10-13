#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string a; cin>>a; int al=a.length();
    for(int m=al;m<=al*2;m++){
        bool can=0;
        for(int i=(m+1)/2;i<al;i++) if(a[i]!=a[m-i-1]) {can=1; break;}
        if(!can) {cout<<m; return 0;}
    }
    return 0;
}