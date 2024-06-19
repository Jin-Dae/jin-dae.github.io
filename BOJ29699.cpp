#include<iostream>
#include<cstring>
using namespace std;
string a="WelcomeToSMUPC";
int n;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    cout<<a[(n-1)%14];
    return 0;
}