#include<iostream>
using namespace std;
bool con,divi;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    if(!(a%7)) divi=1;
    while(a){
        if(a%10==7) con=1;
        a/=10;
    }
    if(divi) cout<<(con?3:1);
    else cout<<(con?2:0);
    return 0;
}