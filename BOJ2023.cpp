//https://www.acmicpc.net/problem/2023
#include<iostream>
#include<cmath>
using namespace std;
int n;
bool chk_prime(int a){
    if(a==1) return 0;
    for(int i=2;i<=(int)sqrt(a);i++){
        if(!(a%i)) return 0;
    }
    return 1;
}
void func(int len,int num){
    if(len==n){
        cout<<num<<'\n';
        return;
    }
    for(int i=1;i<10;i++){
        int nnum=num*10+i;
        if(chk_prime(nnum)) func(len+1,nnum);
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    func(0,0);
    return 0;
}