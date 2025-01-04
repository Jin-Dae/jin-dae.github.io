#include<iostream>
using namespace std;
int n,day[367][2],a1,a2,a3,a4,a5;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        char a; int b,c,d; cin>>a>>b>>c;
        if(a=='T') d=0;
        else d=1;
        for(int j=b;j<=c;j++) day[j][d]++;
        a5=max(a5,c-b+1);
    }
    for(int i=1;i<=366;i++){
        if(day[i][0]+day[i][1]>0) a1++;
        a2=max(a2,day[i][0]+day[i][1]);
        if(day[i][0]>0&&day[i][1]>0&&day[i][0]==day[i][1]){
            a3++;
            a4=max(a4,day[i][0]+day[i][1]);
        }
    }
    cout<<a1<<'\n'<<a2<<'\n'<<a3<<'\n'<<a4<<'\n'<<a5;
    return 0;
}