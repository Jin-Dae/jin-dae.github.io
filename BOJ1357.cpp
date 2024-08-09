#include<iostream>
using namespace std;
int rev(int a){
    int b=0;
    while(a){
        b*=10;
        b+=a%10;
        a/=10;
    }
    return b;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int x,y; cin>>x>>y;
    cout<<rev(rev(x)+rev(y));
    return 0;
}