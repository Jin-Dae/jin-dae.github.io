#include<iostream>
#include<cstring>
using namespace std;
struct id{
    string a;
    int age,kg;
}b;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(1){
        cin>>b.a>>b.age>>b.kg;
        if(b.a=="#") return 0;
        cout<<b.a<<' ';
        if(b.age>17||b.kg>=80) cout<<"Senior";
        else cout<<"Junior";
        cout<<'\n';
    }
    return 0;
}