#include<iostream>
using namespace std;
char lc='B', fc='s',temp;
int cnt[2],n; // 0:B, 1:s
bool nopr[5000001]={1,1,};
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        if(!nopr[i]){
            int a=i*2;
            while(a<=n){
                nopr[a]=1;
                a+=i;
            }
            if(lc=='B') cnt[1]+=2,cnt[0]--;
            else cnt[1]++;
            temp=fc,fc='s',lc=temp;
        }
        else { cnt[0]++,lc='B';}
    }
    cout<<cnt[0]<<' '<<cnt[1];
    return 0;
}