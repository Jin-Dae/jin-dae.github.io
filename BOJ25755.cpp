//https://www.acmicpc.net/problem/25755
#include<iostream>
using namespace std;
int main(){
    int n,sh,sx,wh,wx,k; char a,ans[20][20];
    cin>>a>>n;
    if(a=='D'||a=='U') sx=0,sh=n-1,wx=1,wh=-1;
    else sx=n-1,sh=0,wx=-1,wh=1;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++){
        cin>>k; char&ref=ans[sh+wh*i][sx+wx*j];
        if(k==1) ref='1';
        else if(k==8) ref='8';
        else if(k==2) ref='5';
        else if(k==5) ref='2';
        else ref='?';
    }
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            cout<<ans[i][j]<<' ';
         }
        cout<<'\n';
    }
    return 0;
}