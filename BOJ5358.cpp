#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string a;
    while(getline(cin,a)){
        for(int i=0;i<a.length();i++){
            if(a[i]=='i') cout<<'e';
            else if(a[i]=='e') cout<<'i';
            else if(a[i]=='E') cout<<'I';
            else if(a[i]=='I') cout<<'E';
            else cout<<a[i];
        }
        cout<<'\n';
    }
    return 0;
}