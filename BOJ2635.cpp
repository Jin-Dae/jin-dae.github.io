#include<iostream>
using namespace std;
int n,maxc,maxi,cnt,a,b,temp;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cnt=1,a=n,b=i;
        while(b>=0){
            temp=a-b;
            a=b;
            b=temp;
            cnt++;
        }
        if(maxc<cnt) maxc=cnt,maxi=i;
    }
    a=n; b=maxi; cnt=0; cout<<maxc<<'\n'<<n<<' ';
    while(b>=0){
        cout<<b<<' ';
        temp=a-b;
        a=b;
        b=temp;
        cnt++;
    }
    return 0;
}