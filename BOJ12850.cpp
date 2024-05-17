#include<iostream>
#define ll long long
#define divisor 1000000007
using namespace std;
ll n,w,temp[8],ans[8][8],g[61][8][8] = {
    {{0, 1, 1, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 1},
    {0, 0, 0, 1, 1, 0, 1, 0},
    {0, 0, 0, 0, 0, 1, 0, 1},
    {0, 0, 0, 0, 1, 0, 1, 0}}};
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < 8;i++) ans[i][i] = 1;
    for (int m = 0; m < 60; m++)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                for (int k = 0; k < 8; k++){
                        g[m + 1][i][j] += g[m][i][k] * g[m][k][j] % divisor;
                        g[m + 1][i][j] %= divisor;
                }
            }
        }
    }
    while (n)
    {
        if(n&1){
            for (int i = 0; i < 8;i++){
                for (int j = 0; j < 8;j++){
                    ll a = 0;
                    for (int k = 0; k < 8;k++){
                        a += ans[i][k] * g[w][k][j]%divisor;
                        a %= divisor;
                    }
                    temp[j] = a;
                }
                for (int j = 0; j < 8;j++) ans[i][j] = temp[j];
            }
        }
        n >>= 1;
        w++;
    }
    cout << ans[0][0];
    return 0;
} 