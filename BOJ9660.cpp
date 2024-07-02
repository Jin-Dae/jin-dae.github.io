#include<iostream>
#include<cstring>
using namespace std;
string a[7]={"CY","SK","CY","SK","SK","SK","SK"};
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    long long n; cin>>n;
    cout<<a[n%7];
    return 0;
}