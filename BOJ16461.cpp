#include<iostream>
#include<cstring>
using namespace std;
int ctoi(string a){
    int s=14;
    for(int i=2;i<7;i++){
        if(i==3) continue;
        s=s*10+a[i]-'0';
    }
    return s;
}
int t,c,a1,u[2],dn[2];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    while(t--){
        string d,e,f; char g; int ans=6,w[2]={1,1};
        cin>>d>>e>>g>>f; c=ctoi(f); w[g-'A']=0;
        u[0]=dn[0]=ctoi(d),u[1]=dn[1]=ctoi(e);
        for(int i=0;i<=5;i++){
            for(int j=0;j<2;j++){
                if(u[j]>146000) u[j]=144000;
                if(dn[j]<144000) dn[j]=146000;
                if(u[j]==c||dn[j]==c) ans=min(ans,i+w[j]);
            }
            if(ans!=6) break;                
            for(int j=0;j<2;j++) u[j]+=20,dn[j]-=20;
        }
        cout<<ans<<'\n';
    }
    return 0;
}