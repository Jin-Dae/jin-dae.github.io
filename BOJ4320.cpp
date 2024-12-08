#include<iostream>
using namespace std;
int main(){
    while(1){
        long long n,ans; cin>>n; bool fd=0,pl=1;
        if(!n) return 0;
        if(n<0) n=-n,pl=0;
        for(long long i=2;i*i<=n;i++){
            long long a=n,cnt=0;
            while(1){
                if(a==1) {fd=1; break;}
                if(a%i) break;
                a/=i;
                cnt++;
            }
            if(fd) {ans=cnt; break;}
        }
        if(!fd) cout<<1<<'\n';
        else if(pl||ans%2) cout<<ans<<'\n';
        else if(ans%4) cout<<ans/2<<'\n';
        else{
            bool flag=1;
            for(int i=4;i<=11;i++){
                if(!(ans%i)&&(ans/i)%2){
                    cout<<ans/i<<'\n'; flag=0;
                    break;
                }
            }
            if(flag) cout<<1<<'\n';
        }
    }
}