#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    long long a; cin>>a;
    if(a<=21){
    if(a<=1) cout<<1;
    else if(a<=3) cout<<2;
    else if(a<=6) cout<<3;
    else if(a<=10) cout<<4;
    else if(a<=15) cout<<5;
    else cout<<6;
    return 0;
    }
    a=a%7?a/7+1:a/7;
    cout<<a+3;
    return 0;
}