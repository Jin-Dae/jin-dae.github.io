#include<iostream>
#define ll long long
#define divisor 998244353
using namespace std;
ll n,ans[3][3]={1,0,0,0,1,0,0,0,1},Q[61][3][3]={
    {{0,1,1},
     {1,0,0},
     {0,1,0}
    }
};
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    for(int i=1;i<61;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                for(int m=0;m<3;m++){
                    Q[i][j][k]+=Q[i-1][j][m]*Q[i-1][m][k];
                }
                Q[i][j][k]%=divisor;
            }
        }
    }
    while(t--){
        cin>>n;
        int w=0;
        while(n){       
        if(n&1){
            for(int i=0;i<3;i++){
                ll a[3]={0};
                for(int j=0;j<3;j++){
                    for(int k=0;k<3;k++){
                        a[j]+=ans[i][k]*Q[w][k][j];
                    }
                    a[j]%=divisor;
                }
                for(int j=0;j<3;j++) ans[i][j]=a[j];
            }
        }
        n>>=1;
        w++;
        }
        cout<<(ans[2][0]+ans[2][1])%divisor<<'\n';
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j) ans[i][j]=1;
                else ans[i][j]=0;
            }
        }
    }
    return 0;
}
