#include<iostream>
using namespace std;
int n,f;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>f;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            n/=100;
            n*=10; n+=i;
            n*=10; n+=j;
            if(!(n%f)) {cout<<i<<j; return 0;}
        }
    }
    return 0;
}