#include<iostream>
#include<cstring>
using namespace std;
string a[4],c="Cheese";
int main(){
    int n,cnt=0,len; cin>>n;
    for(int i=0;i<n;i++){
        string b; cin>>b; bool can=1; len=b.length();
        for(int j=0;j<cnt;j++) if(a[j]==b) can=0;
        if(len>=6) {for(int j=len-6,r=0;r<6;r++) if(b[j+r]!=c[r]) can=0;}
        else can=0;
        if(can) a[cnt++]=b;
        if(cnt==4){
            cout<<"yummy";
            return 0;
        } 
    }
    cout<<"sad";
    return 0;
}