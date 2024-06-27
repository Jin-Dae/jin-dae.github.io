#include<iostream>
#include<cstring>
using namespace std;
string a;
char b[10]={'a','e','i','o','u','A','E','I','O','U'};
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(1){
        int cnt=0;
        getline(cin,a);
        if(a=="#") return 0;
        for(int i=0;i<a.length();i++){
            for(int j=0;j<10;j++) if(a[i]==b[j]) {cnt++; break;}
        }
        cout<<cnt<<'\n';
    }
    return 0;
}