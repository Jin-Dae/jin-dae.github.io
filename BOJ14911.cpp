#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int a;
pair<int,int> b;
vector<int> v;
map<int,bool> m;
vector<pair<int,int>> pv;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(cin>>a){
        v.push_back(a);
    }
    v.pop_back();
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(!m[v[i]]){
            if(v[i]==v[i+1]) m[v[i]]=1;
            if(m[a-v[i]]) b.first=a-v[i],b.second=v[i],pv.push_back(b);
            m[v[i]]=1;
        }
    } sort(pv.begin(),pv.end());
    for(int i=0;i<pv.size();i++) cout<<pv[i].first<<' '<<pv[i].second<<'\n';
    cout<<pv.size();
    return 0;
}