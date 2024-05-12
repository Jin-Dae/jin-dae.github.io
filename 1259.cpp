#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        string a;
        cin >> a;
        if(a[0]=='0') return 0;
        int len = a.length(), mid = len / 2;
        bool isit = 1;
        for (int i = 0; i < mid; i++)
        {
            if (a[i] != a[len - i - 1])
                isit = 0;
        }
        if(isit) cout << "yes"<<'\n';
        else cout << "no" << '\n';
    }
}