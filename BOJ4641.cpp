#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(1){
        bool chk[100]={0,};
        int ipt[16],cnt=0;
        for(int i=0;i<16;i++){
            cin>>ipt[i]; 
            if(ipt[i]==0) break;
            else if(ipt[i]==-1) return 0;
            chk[ipt[i]]=1;
        }
        for(int i=0;ipt[i];i++) if(ipt[i]*2<100&&chk[ipt[i]*2]) cnt++;
        cout<<cnt<<'\n';
    }
}