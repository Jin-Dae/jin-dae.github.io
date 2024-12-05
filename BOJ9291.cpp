#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int map[9][9]; bool can=1;
        for(int j=0;j<9;j++) for(int k=0;k<9;k++) cin>>map[j][k];
        for(int j=0;j<9;j++) {
            bool v1[10]={0},v2[10]={0};
            for(int k=0;k<9;k++){
                if(v1[map[j][k]]) {can=0; break;}
                else v1[map[j][k]]=1;
                if(v2[map[k][j]]) {can=0; break;}
                else v2[map[k][j]]=1;
            }
            if(!can) break;
        }
        for(int j=0;j<3;j++) for(int k=0;k<3;k++){
            if(!can) break;
            int h=j*3,x=k*3; bool v[10]={0};
            for(int w1=0;w1<3;w1++) for(int w2=0;w2<3;w2++){
                if(!can) break;
                if(v[map[h+w1][x+w2]]) can=0;
                else v[map[h+w1][x+w2]]=1;
            }
        }
        if(can) cout<<"Case "<<i<<": CORRECT\n";
        else cout<<"Case "<<i<<": INCORRECT\n";
    }
    return 0;
}