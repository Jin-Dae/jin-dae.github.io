#include<iostream>
using namespace std;
int cnt[7],a,b,c,d;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>a>>b>>c;
    cnt[a]++,cnt[b]++,cnt[c]++;
    d=max(cnt[a],max(cnt[b],cnt[c]));
    if(d==3) cout<<10000+a*1000;
    else if(d==2){
        if(cnt[a]==2) cout<<1000+a*100;
        else cout<<1000+b*100;
    }
    else cout<<max(a,max(b,c))*100;
    return 0;
}