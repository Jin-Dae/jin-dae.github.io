#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string a; cin>>a;
    int b=a.length(),c=0;
    for(int i=1;i<=b/2;i++){
        for(int j=0;j<b-i;j++){
            int suma=0,sumb=0;
            for(int k=j;k<j+i;k++) suma+=a[k]-'0';
            for(int k=j+i;k<j+2*i;k++) sumb+=a[k]-'0';
            if(suma==sumb) c=max(c,i);
        }
    }
    cout<<c*2;
    return 0;
}
