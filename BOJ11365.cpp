#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);    
    string a;
    while(1){
        getline(cin,a);
        if(a=="END") return 0;
        for(int i=a.length()-1;i>=0;i--) cout<<a[i];
        cout<<'\n';
    }
    return 0;
}