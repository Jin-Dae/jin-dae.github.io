#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    double a; cin>>a;
    cout<<fixed; cout.precision(2);
    while(1){
        double b; cin>>b;
        if(b==999) return 0;
        cout<<b-a<<'\n';
        a=b;
    }
    return 0;
}