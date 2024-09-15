//https://www.acmicpc.net/problem/1063
#include<iostream>
#include<cstring>
using namespace std;
int n;
string kpo,dpo;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>kpo>>dpo>>n;
    for(int i=0;i<n;i++){
        string a; cin>>a; int t[2],n1,n2,d1,d2;
        if(a=="R") t[0]=1,t[1]=0;
        else if(a=="L") t[0]=-1,t[1]=0;
        else if(a=="B") t[0]=0,t[1]=-1;
        else if(a=="T") t[0]=0,t[1]=1;
        else if(a=="RT") t[0]=1,t[1]=1;
        else if(a=="LT") t[0]=-1,t[1]=1;
        else if(a=="RB") t[0]=1,t[1]=-1;
        else if(a=="LB") t[0]=-1,t[1]=-1;
        n1=kpo[0]+t[0],n2=kpo[1]+t[1],d1=dpo[0]+t[0],d2=dpo[1]+t[1];
        if((n1<'A'||n1>'H'||n2<'1'||n2>'8')||((dpo[0]==n1&&dpo[1]==n2)&&(d1<'A'||d1>'H'||d2<'1'||d2>'8'))) continue;
        kpo[0]=n1,kpo[1]=n2;
        if(dpo[0]==n1&&dpo[1]==n2) dpo[0]=d1,dpo[1]=d2;
    }
    cout<<kpo<<'\n'<<dpo;
    return 0;
}