#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a,b,c,d,cnt=0; cin>>a>>b>>c>>d;
    for(int i=0;i<=d/a;i++){
        for(int j=0;j<=d/b;j++){
            for(int k=0;k<=d/c;k++){
                if(a*i+b*j+c*k==d) cout<<i<<' '<<j<<' '<<k<<'\n',cnt++;
            }
        }
    }
    if(!cnt) cout<<"impossible";
    return 0;
}
