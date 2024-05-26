#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,cnt2=0,cnt5=0; cin>>n;
    for(int i=2;i<=n;i++){
        int a=i;
        while(a%2==0){
                cnt2++;
                a/=2;
        }
        while(a%5==0){
                cnt5++;
                a/=5;
        }
    }
    cout<<min(cnt2,cnt5);
    return 0;
}