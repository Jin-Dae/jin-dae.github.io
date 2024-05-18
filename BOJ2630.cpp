#include<iostream>
using namespace std;
bool map[128][128];
int n,wh[4]={0,1,0,1},wx[4]{0,0,1,1},pa[2];
void func(int len,int h,int x){
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(map[h+i][x+j]!=map[h][x]){
                for(int i=0;i<4;i++){
                int nh=h+wh[i]*(len/2),nx=x+wx[i]*(len/2);
                func(len/2,nh,nx);
                }
                return;
            }
        }
    }
    pa[map[h][x]]++;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>map[i][j];
    func(n,0,0);
    cout<<pa[0]<<'\n'<<pa[1];
    return 0;
}