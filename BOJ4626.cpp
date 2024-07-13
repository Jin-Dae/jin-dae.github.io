#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n,d,b,e,a[5001];
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>d>>b>>e;
        cout<<"Problem set "<<i<<": "<<n<<" / "<<d<<", base 7 digits "<<b<<" through "<<e<<": ";
        n%=d;
        for(int j=0;j<=e;j++){
            n*=7;
            a[j]=n/d;
            n%=d;
        }
        for(int j=b;j<=e;j++) cout<<a[j];
        cout<<'\n';
    }
    return 0;
}