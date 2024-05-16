#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string ipt[20001];
bool comp(const string a,const string b){
    int lena = a.length(), lenb = b.length();
    if(lena!=lenb) return lena < lenb;
    else{
        for (int i = 0; i < lena;i++){
            if(a[i]!=b[i]) return a[i] < b[i];
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n;i++) cin >> ipt[i];
    sort(ipt, ipt + n, comp);
    for (int i = 0; i < n;i++){
        if(ipt[i]!=ipt[i+1]) cout << ipt[i] << '\n';
    }
    return 0;
}