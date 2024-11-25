#include<iostream>
using namespace std;
long long n,k,a[1000000];
long long ps(long long s,long long e){
    if(s==e) return s;
    long long m=(s+e)/2,sum=m*(m+1)/2; bool c=0;
    for(int i=0;i<n;i++){
        if(i!=n-1)sum+=min(a[i+1]-a[i],m)*max(m+1,2*m-(a[i+1]-a[i]-1))/2;
        if(sum>=k){c=1; break;}
    }
    if(c) return ps(s,m);
    else return ps(m+1,e);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<ps(1,2000000000);
    return 0;
}