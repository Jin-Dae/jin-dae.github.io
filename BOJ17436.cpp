#include<iostream>
#define ll long long
using namespace std;
int n, prime[10];
ll m;
ll cnt_1dn(int idx,int cnt,ll prd){
    ll ans = 0;
    for (int i = 0; i < idx;i++){
        ll nprd = prd * prime[i];
        if(nprd>m) break;
        if(cnt%2) ans += m / nprd;
        else ans -= m / nprd;
        ans += cnt_1dn(i, cnt + 1, nprd);
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> prime[i];
    cout << cnt_1dn(n, 1, 1);
    return 0;
}