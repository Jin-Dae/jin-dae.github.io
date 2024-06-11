#include<iostream>
using namespace std;
bool can[2001][2001];
int d1,d2,ans;
int gcd(int a,int b){
    return b%a?gcd(b%a,a):a;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>d1>>d2;
    for(int i=d1;i<=d2;i++){
        for(int j=1;j<i;j++){
            if(!can[j][i]){
                ans++;
                int g=gcd(j,i),j_=j/g,i_=i/g;
                while(i_<=d2){
                    can[j_][i_]=1;
                    j_+=j/g,i_+=i/g;
                }
            }   
        }
    }
    cout<<ans+1;
    return 0;
}