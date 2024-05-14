#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int n, p,mid,ps,MAX;
bool notprime[35000];
vector<int> prime;
void find_prime_under_p(){ //sieve of eratos
    for (int i = 2; i < p;i++){
        if(!notprime[i]){
            for (int j = i*2; j < p;j+=i) notprime[j] = 1;
        }
    }
    for (int i = 2; i < p;i++){
        if(!notprime[i]) prime.push_back(i);
    }
    ps = prime.size();
}
int find_cant(int idx,int prd,int cnt){ //inclusion-exclusion principle
    int cant = 0;
    for (int i = 0; i < idx;i++){
        ll nprd=(ll)prd*prime[i];
        if(nprd>mid) break;
        if(cnt%2) cant += mid / nprd;
        else cant -= mid / nprd;
        cant += find_cant(i, nprd, cnt + 1);
    }
    return cant;
}
int binary_search(int st,int ed){ //lower bound
    mid = (st + ed) / 2;
    int cant = find_cant(ps, 1, 1);
    if(st==ed) return mid * p;
    if(mid-cant<n) return binary_search(mid + 1, ed);
    else return binary_search(st, mid);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> p;
    if (35000 < p){
        if (n == 1) cout << p;
        else cout << 0;
    }
    else{
        MAX = 1000000000 / p, mid = MAX;
        find_prime_under_p();
        if(n>MAX-find_cant(ps, 1, 1)) cout<< 0;
        else cout << binary_search(1, MAX);
    }
    return 0;
}