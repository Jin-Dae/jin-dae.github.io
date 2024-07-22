#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a,b,cnt=0; cin>>a>>b;
    while(1){
        if(a<=b) {cout<<cnt+b-a; return 0;}
        else a=a%2?a+1:a/2;
        cnt++;
    }
    return 0;
}
