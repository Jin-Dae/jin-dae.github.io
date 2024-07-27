#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        int a,b,c=1; cin>>a>>b;
        for(int i=0;i<b;i++){
            c*=a;
            c%=10; 
        }
        if(!c) c=10;
        cout<<c<<'\n';
    }
    return 0;
}