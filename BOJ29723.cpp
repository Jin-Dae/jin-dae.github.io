#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int cnt[101],k,n,m,MAX,MIN;
map<string,int> mp;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        string a; int b; cin>>a>>b;
        mp[a]=b; cnt[b]++;
    }
    for(int i=0;i<k;i++){
        string a; cin>>a;
        MAX+=mp[a]; cnt[mp[a]]--;
    }
    MIN=MAX;
    for(int i=100,c=m-k;i>=0;i--){
        if(cnt[i]){
            if(cnt[i]>=c) {MAX+=c*i; break;}
            else {MAX+=cnt[i]*i; c-=cnt[i];}
        }
    }    
    for(int i=0,c=m-k;i<=100;i++){
        if(cnt[i]){
            if(cnt[i]>=c) {MIN+=c*i; break;}
            else {MIN+=cnt[i]*i; c-=cnt[i];}
        }
    }
    cout<<MIN<<' '<<MAX;
    return 0;
}