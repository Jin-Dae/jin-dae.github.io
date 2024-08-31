//https://www.acmicpc.net/problem/17609
#include<iostream>
#include<cstring>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t,al; cin>>t;
    while(t--){
        string a; cin>>a;
        int l=0,r=a.length()-1,c=0;
        while(l<r){
            if(a[l]==a[r]) l++,r--;
            else{
                    if(a[l]!=a[r-1]&&a[l+1]!=a[r]) c=2;
                    if(a[l+1]==a[r]){ 
                        int ll=l+2,rr=r-1; c=1;
                        while(ll<rr){
                            if(a[ll]==a[rr]) ll++,rr--;
                            else {c=2; break;}
                        }
                    }
                    if(c!=1&&a[l]==a[r-1]){
                        int ll=l+1,rr=r-2; c=1;
                        while(ll<rr){
                            if(a[ll]==a[rr]) ll++,rr--;
                            else {c=2; break;}
                        }
                    } 
                    break;
                }
        }
        cout<<c<<'\n';
    }
    return 0;
}