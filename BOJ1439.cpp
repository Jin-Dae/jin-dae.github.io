#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string a; cin>>a; int cnt=0;
    for(int i=0;i<a.length()-1;i++) if(a[i]!=a[i+1]) cnt++;
    cout<<(cnt+1)/2;
    return 0;
}