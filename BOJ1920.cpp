#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int, bool> chk;
int n, m;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n;i++){
        int a; cin >> a;
        chk[a] = 1;
    }
    cin >> m;
    for (int i = 0; i < m;i++){
        int a;
        cin >> a;
        if(chk.find(a)!=chk.end()) cout << 1 << '\n';
        else cout << 0 <<'\n';
    }
    return 0;
}