#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> v;
void func(int num){
    if(num==m){
        for(int i=0;i<m;i++) cout<<v[i]<<' ';
        cout<<'\n';
        return;
    }
    for(int i=1;i<=n;i++){
        v.push_back(i);
        func(num+1);
        v.pop_back();
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    func(0);
    return 0;
}