#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string fib[10001];
string sum(int idxa,int idxb){
    string a=fib[idxa],b=fib[idxb],c;
    int lena=a.length(),lenb=b.length(),up=0,s;
    for(int i=0;i<max(lena,lenb);i++){
        s=up;
        if(i<lenb) s+=b[i]-'0';
        if(i<lena) s+=a[i]-'0';
        c+=s%10+'0';
        up=s/10;
    }
    if(up) c+=up+'0';
    return c;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    fib[0]="0",fib[1]="1";
    for(int i=2;i<=n;i++) fib[i]=sum(i-1,i-2);
    reverse(fib[n].begin(),fib[n].end());
    cout<<fib[n];
    return 0;
}