#include<iostream>
#include<cstring>
using namespace std;
int m,n;
string ipt[1000][3];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>ipt[i][0]>>ipt[i][1]>>ipt[i][2];
    for(int i=0;i<m;i++){
        string a[3]; cin>>a[0]>>a[1]>>a[2];
        int cnt=0;
        for(int j=0;j<n;j++){
            bool chk=1;
            for(int k=0;k<3;k++){
                if(!(a[k]=="-"||a[k]==ipt[j][k])) chk=0;
            }
            if(chk) cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}