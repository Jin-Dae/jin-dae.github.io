#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    b=b%d?b/d+1:b/d;
    c=c%e?c/e+1:c/e;
    b=max(b,c);
    cout<<a-b;
    return 0;
}