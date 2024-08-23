#include<iostream>
using namespace std;
int cost[4][4];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c; cin>>a>>b>>c;
        cost[1][a]++,cost[2][b]++,cost[3][c]++;
        cost[1][0]+=a,cost[2][0]+=b,cost[3][0]+=c;
    }
    if((cost[1][0]==cost[2][0])&&(cost[1][0]==cost[3][0])){
        if((cost[1][3]>cost[2][3])&&(cost[1][3]>cost[3][3])) cout<<1<<" "<<cost[1][0];
        else if((cost[2][3]>cost[1][3])&&(cost[2][3]>cost[3][3])) cout<<2<<" "<<cost[2][0];
        else if((cost[3][3]>cost[2][3])&&(cost[3][3]>cost[1][3])) cout<<3<<" "<<cost[3][0];
        else cout<<0<<" "<<cost[1][0];
    }
    else if(cost[1][0]==cost[2][0]&&(cost[1][0]>cost[3][0])){
        if(cost[1][3]==cost[2][3]){
            if(cost[1][2]==cost[2][2]) cout<<0<<" "<<cost[1][0];
            else if(cost[1][2]>cost[2][2]) cout<<1<<" "<<cost[1][0];
            else cout<<2<<" "<<cost[1][0];
        }
        else if(cost[1][3]>cost[2][3]) cout<<1<<" "<<cost[1][0];
        else cout<<2<<" "<<cost[2][0];
    }
    else if(cost[1][0]==cost[3][0]&&(cost[1][0]>cost[2][0])){
        if(cost[1][3]==cost[3][3]){
            if(cost[1][2]==cost[3][2]) cout<<0<<" "<<cost[1][0];
            else if(cost[1][2]>cost[3][2]) cout<<1<<" "<<cost[1][0];
            else cout<<3<<" "<<cost[3][0];
        }
        else if(cost[1][3]>cost[3][3]) cout<<1<<" "<<cost[1][0];
        else cout<<3<<" "<<cost[3][0];
    }
    else if(cost[3][0]==cost[2][0]&&(cost[2][0]>cost[1][0])){
        if(cost[2][3]==cost[3][3]){
            if(cost[2][2]==cost[3][2]) cout<<0<<" "<<cost[2][0];
            else if(cost[2][2]>cost[3][2]) cout<<2<<" "<<cost[2][0];
            else cout<<3<<" "<<cost[3][0];
        }
        else if(cost[2][3]>cost[3][3]) cout<<2<<" "<<cost[2][0];
        else cout<<3<<" "<<cost[3][0];
    }
    else{
        if(cost[3][0]>cost[1][0]&&cost[3][0]>cost[2][0]) cout<<3<<" "<<cost[3][0];
        else if(cost[2][0]>cost[1][0]&&cost[2][0]>cost[3][0]) cout<<2<<" "<<cost[2][0];
        else cout<<1<<" "<<cost[1][0];
    }
    return 0;
}