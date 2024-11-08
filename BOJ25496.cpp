#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int p,n,cnt=0,ipt[1000]; cin>>p>>n;
    for(int i=0;i<n;i++) cin>>ipt[i];
    sort(ipt,ipt+n);
    for(int i=0;i<n;i++){
        if(p>=200) break;
        cnt++;
        p+=ipt[i];        
    }
    cout<<cnt;
    return 0;
}