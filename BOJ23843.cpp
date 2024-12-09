#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int m,n,a[10000];
priority_queue<int,vector<int>,greater<int>> pq;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) pq.push(0);
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        int MIN=pq.top(); pq.pop();
        MIN+=a[i]; pq.push(MIN);
    }
    for(int i=0;i<m-1;i++) pq.pop();
    cout<<pq.top();
    return 0;
}