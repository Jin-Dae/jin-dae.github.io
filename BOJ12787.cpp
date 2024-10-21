#include<iostream>
#include<cstring>
using namespace std;
unsigned long long a,t,b,s;
string c;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    while(t--){
        cin>>b; a=0;
        if(b==1){
            cin>>c;
            s=0;
            for(int i=0;i<c.length();i++){
                if(c[i]=='.'){
                    a+=s;
                    a*=(1<<8);
                    s=0;
                }
                else{   
                    s*=10;
                    s+=c[i]-'0';
                }
            }
            cout<<a+s<<'\n';
        }
        else{
            cin>>b; s=0;
            for(int j=63;j>=0;j--){
                if(j%8==7&&j!=63) cout<<'.';
                if(b&(1ull<<j)) s+=(1<<(j%8));
                if(!(j%8)) {cout<<s; s=0;}
            }
            cout<<'\n';
        }
    }
    return 0;
}