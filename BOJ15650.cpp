#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> v;
void func(int now,int num){
    if(num==m){
        for(int i=0;i<m;i++) cout<<v[i]<<' ';
        cout<<'\n';
        return;
    }
    if(now>n) return;
    for(int i=now;i<=n;i++){
        v.push_back(i);
        func(i+1,num+1);
        v.pop_back();
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    func(1,0);
    return 0;
}