#include<iostream>
#include<cstring>
using namespace std;
string a; 
bool chk[100];
char b[100];
int len;
void func(int st,int ed){
    if(st>ed) return;
    int c=st;
    for(int i=st;i<=ed;i++) if(a[c]>a[i]) c=i;
    b[c]=a[c];
    for(int i=0;i<len;i++) if(b[i]) cout<<b[i];
    cout<<'\n';
    func(c+1,ed);
    func(st,c-1);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>a; len=a.length();
    func(0,len-1);
    return 0;
}